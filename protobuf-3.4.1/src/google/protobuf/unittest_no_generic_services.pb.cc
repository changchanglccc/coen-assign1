// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_generic_services.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/unittest_no_generic_services.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace no_generic_services_test {
class TestMessageDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TestMessage>
     _instance;
} _TestMessage_default_instance_;

namespace protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _internal_metadata_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, a_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(TestMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TestMessage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/unittest_no_generic_services.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _TestMessage_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TestMessage_default_instance_);::google::protobuf::internal::ExtensionSet::RegisterExtension(
    ::google::protobuf::no_generic_services_test::TestMessage::internal_default_instance(),
    1000, 5, false, false);
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n2google/protobuf/unittest_no_generic_se"
      "rvices.proto\022(google.protobuf.no_generic"
      "_services_test\"#\n\013TestMessage\022\t\n\001a\030\001 \001(\005"
      "*\t\010\350\007\020\200\200\200\200\002*\023\n\010TestEnum\022\007\n\003FOO\020\0012\202\001\n\013Tes"
      "tService\022s\n\003Foo\0225.google.protobuf.no_gen"
      "eric_services_test.TestMessage\0325.google."
      "protobuf.no_generic_services_test.TestMe"
      "ssage:N\n\016test_extension\0225.google.protobu"
      "f.no_generic_services_test.TestMessage\030\350"
      "\007 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 365);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_no_generic_services.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto

const ::google::protobuf::EnumDescriptor* TestEnum_descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::file_level_enum_descriptors[0];
}
bool TestEnum_IsValid(int value) {
  switch (value) {
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMessage::kAFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMessage::TestMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.no_generic_services_test.TestMessage)
}
TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  a_ = from.a_;
  // @@protoc_insertion_point(copy_constructor:google.protobuf.no_generic_services_test.TestMessage)
}

void TestMessage::SharedCtor() {
  _cached_size_ = 0;
  a_ = 0;
}

TestMessage::~TestMessage() {
  // @@protoc_insertion_point(destructor:google.protobuf.no_generic_services_test.TestMessage)
  SharedDtor();
}

void TestMessage::SharedDtor() {
}

void TestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TestMessage& TestMessage::default_instance() {
  protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::InitDefaults();
  return *internal_default_instance();
}

TestMessage* TestMessage::New(::google::protobuf::Arena* arena) const {
  TestMessage* n = new TestMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.no_generic_services_test.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  a_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.no_generic_services_test.TestMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 a = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_a();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &a_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              _internal_metadata_.mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.no_generic_services_test.TestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.no_generic_services_test.TestMessage)
  return false;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.no_generic_services_test.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->a(), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.no_generic_services_test.TestMessage)
}

::google::protobuf::uint8* TestMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.no_generic_services_test.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->a(), target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, deterministic, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.no_generic_services_test.TestMessage)
  return target;
}

size_t TestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.no_generic_services_test.TestMessage)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional int32 a = 1;
  if (has_a()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->a());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.no_generic_services_test.TestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const TestMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.no_generic_services_test.TestMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.no_generic_services_test.TestMessage)
    MergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.no_generic_services_test.TestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_a()) {
    set_a(from.a());
  }
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.no_generic_services_test.TestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.no_generic_services_test.TestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessage::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMessage::InternalSwap(TestMessage* other) {
  using std::swap;
  swap(a_, other->a_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessage

// optional int32 a = 1;
bool TestMessage::has_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TestMessage::set_has_a() {
  _has_bits_[0] |= 0x00000001u;
}
void TestMessage::clear_has_a() {
  _has_bits_[0] &= ~0x00000001u;
}
void TestMessage::clear_a() {
  a_ = 0;
  clear_has_a();
}
::google::protobuf::int32 TestMessage::a() const {
  // @@protoc_insertion_point(field_get:google.protobuf.no_generic_services_test.TestMessage.a)
  return a_;
}
void TestMessage::set_a(::google::protobuf::int32 value) {
  set_has_a();
  a_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.no_generic_services_test.TestMessage.a)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::no_generic_services_test::TestMessage,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  test_extension(kTestExtensionFieldNumber, 0);

// @@protoc_insertion_point(namespace_scope)

}  // namespace no_generic_services_test
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)