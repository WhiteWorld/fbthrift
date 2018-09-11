PROJECT(ThriftTransport_CPP2_Example CXX)

find_library (Folly folly /usr/local/lib)
find_library (Boost boost_system /usr/lib)
find_library (SSL ssl /usr/lib)
find_library (Crypto crypto /usr/lib)
find_library (Pthread pthread /usr/lib)
find_library (Glog glog /usr/local/lib)
find_library (Gflag gflags /usr/lib)
find_library (Wangle wangle /usr/lib)
find_library (Double-conversion double-conversion /usr/lib)
find_library (Thriftcpp2 thriftcpp2 /usr/lib)
find_library (Thrift thrift /usr/lib)
find_library (Thrift-core thrift-core /usr/lib)
find_library (Thriftprotocol thriftprotocol /usr/lib)
find_library (Thriftfrozen2 thriftfrozen2 /usr/lib)
find_library (Krb5 krb5 /usr/lib)
find_library (Transport transport /usr/lib)
find_library (Server server /usr/lib)
find_library (Protocol protocol /usr/lib)
find_library (Security security /usr/lib)
find_library (Concurrency concurrency /usr/lib)

set(LIBS ${Thriftcpp2}  ${Thrift} ${Thrift-core} ${Thriftprotocol} ${Thriftfrozen2}  ${Folly} ${Boost} ${SSL} ${Crypto} ${Pthread} ${Glog} ${Gflag}  ${Wangle} ${Double-conversion} ${Krb5} ${Transport} ${Server} ${Protocol} ${Security} ${Concurrency})

add_executable(
  example_server

  server/EchoService.h
  server/EchoService.cpp
  server/ChatRoomService.h
  server/ChatRoomService.cpp
  server/ExampleServer.cpp
)
target_link_libraries(
  example_server
  thriftcpp2
  chatroom-cpp2
  ${GFLAGS_LIBRARIES}
  ${GLOG_LIBRARIES}
)
install(
  TARGETS example_server
  RUNTIME DESTINATION bin/cpp2/
)

add_executable(
  chatroom_client

  client/ChatRoomClient.cpp
)
target_link_libraries(
  chatroom_client

  chatroom-cpp2
)
install(
  TARGETS chatroom_client
  RUNTIME DESTINATION bin/cpp2/
)

add_executable(
  echo_client

  client/EchoClient.cpp
)
target_link_libraries(
  echo_client

  chatroom-cpp2
)
install(
  TARGETS echo_client
  RUNTIME DESTINATION bin/cpp2/
)
