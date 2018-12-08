# vela3

## 设计思路

根据v+2.0的vela程序改造升级. 希望举办以下特性:

- C++开发, 跨平台
- pub/sub模型, 每个业务处理器(process)都采用pub/sub改造
- 一项逻辑业务称为一个job作业, job拥有一个全局唯一的job id
- 每个job由一组任务(task)组成, 每个task有自己的task id 
- 每个process只处理一类task, 通过pub/sub模型构建成一个业务流- 
- task操作的数据描述在内存池中, 目前使用tcmalloc库

## 第三方组件
- 内存组件: tcmalloc
- 日志组件: spdlog
- 网络组件: HP-socket
- pb组件:   google proto buffer 3
- json组件: RapidJson