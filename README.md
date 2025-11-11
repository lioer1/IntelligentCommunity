# IntelligentCommunity

# 目录

[一、项目背景](#一、项目背景)

[二、系统架构与用户权限](#二、系统架构与用户权限)

[1.技术栈选型](##1.技术栈选型)

[2.用户角色与权限设计](##2.用户角色与权限设计)

[三、数据表设计](#三、数据表设计)

[四、团队详细分工](#四、团队详细分工)

[五、系统功能演示](#五、系统功能演示)

# 一、项目背景

- 传统小区管理痛点：传统小区管理存在效率低下、服务响应慢、信息不透明等问题，物业与业主沟通不畅，缴费流程繁琐，故障报修响应滞后，这些问题严重影响了居住体验和管理效率。

- 智慧化转型需求：随着信息技术的发展，小区管理智能化已成为趋势，通过数字化手段优化管理流程、提升服务质量，实现物业高效管理和业主便捷生活的双重目标。

# 二、系统架构与用户权限

## 1.技术栈选型

- 前端采用Qt框架进行界面开发，后端使用C++语言实现业务逻辑，数据库采用SQLite存储数据，形成完整的技术实现体系，满足项目功能需求和性能要求。

## 2.用户角色与权限设计

### 2.1系统管理员权限

- 系统管理员拥有最高权限，负责物业工作员工管理、考勤管理、权限分配等核心管理任务，能够添加、删除和修改物业员工信息，设置不同用户的操作权限范围。

### 2.2物业工作员工权限

- 物业工作员工负责日常小区管理工作，包括个人出勤管理、业主员工管理、小区房屋与车位管理、小区故障处理等，权限范围限定在其工作职责内。

### 2.3业主用户权限

- 业主用户主要进行个人相关业务操作，包括房屋信息查询、车位管理、在线缴费、故障报修与查询等自助服务，只能访问和操作与自身相关的信息数据。

# 三、数据表设计(共8张表)

![IntelligentCommunity](C:\Users\LP\AppData\Roaming\Typora\typora-user-images\image-20251111172736013.png)

<table border="1" cellpadding="4" cellspacing="0">
  <tr>
    <th colspan="3" style="text-align: center; font-weight: bold;">IntelligentCommunity3(SQLite 3)</th>
  </tr>
  <tr>
    <th style="text-align: center;">表名</th>
    <th style="text-align: center;">管理内容</th>
    <th style="text-align: center;">操作权限角色</th>
  </tr>
  <tr>
    <td>errorinfo</td>
    <td>故障管理</td>
    <td>工作人员,业主</td>
  </tr>
  <tr>
    <td>house</td>
    <td>房产管理</td>
    <td>工作人员,业主</td>
  </tr>
  <tr>
    <td>houseowner</td>
    <td>业主管理</td>
    <td>工作人员</td>
  </tr>
  <tr>
    <td>mycarstation</td>
    <td>车位管理</td>
    <td>工作人员,业主</td>
  </tr>
  <tr>
    <td>price</td>
    <td>费用管理</td>
    <td>工作人员</td>
  </tr>
  <tr>
    <td>priceRecord</td>
    <td>缴费记录</td>
    <td>工作人员,业主</td>
  </tr>
  <tr>
    <td>worker</td>
    <td>工作人员管理</td>
    <td>管理员,工作人员</td>
  </tr>
  <tr>
    <td>workerattend</td>
    <td>请假销假管理</td>
    <td>管理员,工作人员</td>
  </tr>
</table>

# 四、团队详细分工

| 成员 | 负责模块                       | 核心工作内容                                                 |  操作权限角色  |涉及文件| 关联数据库表                      |
| ---- | ------------------------------ | ------------------------------------------------------------ | :------------: | :----------------------------------------------------------: | --------------------------------- |
| 1    | 管理员登录、人事管理、请假出勤 | 1.多角色登录；2. 工作人员信息的增删改查；3. 管理员请假审批、月度出勤 |     管理员     |logindialog,workerinfo,managermanage| worker,workerattend                |
| 2    | 系统初始化、业主管理           | 1.系统初始化；2. 业主信息的增删改查                          | 管理员工作人员 |initsystem,managermanage,ownerinfo,workermanage|houseowner|
| 3    | 房产信息、车位管理、缴费管理   | 1. 房屋信息的添加与查询；2. 车位信息的增删改查与出租；3. 费用信息的添加与查询 |    工作人员    |houseinfo,carStationInfo,workermanage,pricemanage,paymanage|house,mycarstation,price,pricerecord |
| 4    | 故障管理、人事管理             | 1. 故障信息的查询与修改；2.工作人员的请假申请，销假与出勤查询； |    工作人员    |workermanage,workerFree,workerClock|errorinfo,workerattend|
| 5    | 车位管理、缴费管理、故障报修   | 1.车位信息的添加与查询；2.费用信息的添加与查询3.故障与意见的提交 |      业主      |applycarstation,ownermanage,ownerpayself,ownermanage,issueinfo,issueassessment|mycarstation,pricerecord,errorinfo|

# 五、系统功能演示

一、管理员功能

1.管理员登录

点击worker表，workertype=’是’为管理员；
输入账号、密码点击登录，进入管理员界面

![image-20251111173921056](C:\Users\LP\AppData\Roaming\Typora\typora-user-images\image-20251111173921056.png)

2.人事管理

工具栏前四个图标对应人事管理的查、增、改、删功能；
例如点击添加人员按钮，弹出添加人员信息界面

![image-20251111174014670](C:\Users\LP\AppData\Roaming\Typora\typora-user-images\image-20251111174014670.png)

3.请假出勤管理

![image-20251111174059546](C:\Users\LP\AppData\Roaming\Typora\typora-user-images\image-20251111174059546.png)

4.系统初始化

![image-20251111174118868](C:\Users\LP\AppData\Roaming\Typora\typora-user-images\image-20251111174118868.png)

二、工作人员功能

三、业主功能

后续展示内容放在B站：【智慧小区管理项目-哔哩哔哩】 https://b23.tv/5JIRgTR