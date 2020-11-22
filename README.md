# 数据结构与算法

记录收集常用数据结构与算法，同时在该工程上实践当下流行的软件工程方案。

- google test 单元测试
- 静态代码扫描
- doxygen 生成文档
- dockerfile 创建编译测试环境
- cpack 创建安装包

## 编译&安装&打包

### CMake 本地源码编译

```bash
# 安装 CppCheck 依赖，也可使用源码安装，该依赖不是必须的
apt-get install cppcheck
# 下载源码
git clone https://github.com/lbcqc/algorithms_and_data_structures.git
cd algorithms_and_data_structures
# 编译
mkdir build && cd build
cmake .. && make
```

### Dockerfile 镜像编译

```bash
# 下载源码
git clone https://github.com/lbcqc/algorithms_and_data_structures.git
cd algorithms_and_data_structures
# 创建镜像
docker build -t algorithms_and_data_structures .
# 创建容器
docker run -itd --name alg_ds_test algorithms_and_data_structures /usr/sbin/init
docker exec -ti alg_ds_test bash
```

### Help

```bash
cd build && make help
```

### 单元测试

```bash
cd build && make test
```

### CppCheck 静态代码扫描

```bash
cd build && make analysis
```

### 安装

```bash
cd build && make install
```

### 打包

```bash
cd build && make package
```

## 源码

### 图

- [邻接矩阵](https://github.com/lbcqc/algorithms_and_data_structures/tree/master/graph/AdjacencyMatrix)
- [迪杰斯特拉](https://github.com/lbcqc/algorithms_and_data_structures/tree/master/graph/Dijkstra)
