/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_TG2;

typedef struct map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >* map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref;

typedef struct map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref;

typedef struct Rb_tree_node_base {
	int _M_color;
	_Rb_tree_node_base _M_parent;
	_Rb_tree_node_base _M_left;
	_Rb_tree_node_base _M_right;
} Rb_tree_node_base;

typedef struct Rb_tree_impl<std::less<int>, false> {
	less<int> _M_key_compare;
	Rb_tree_node_base _M_header;
	unsigned long long _M_node_count;
} Rb_tree_impl<std::less<int>, false>;

typedef struct Rb_tree<int, std::pair<const int, TGUserPresence>, std::_Select1st<std::pair<const int, TGUserPresence> >, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, TGUserPresence>, std::_Select1st<std::pair<const int, TGUserPresence> >, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > >;

typedef struct map<int, TGUserPresence, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > > {
	Rb_tree<int, std::pair<const int, TGUserPresence>, std::_Select1st<std::pair<const int, TGUserPresence> >, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > > _M_t;
} map<int, TGUserPresence, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > >;

typedef struct Rb_tree<int, std::pair<const int, std::pair<TGUser *, int> >, std::_Select1st<std::pair<const int, std::pair<TGUser *, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<TGUser *, int> > > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, std::pair<TGUser *, int> >, std::_Select1st<std::pair<const int, std::pair<TGUser *, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<TGUser *, int> > > >;

typedef struct map<int, std::pair<TGUser *, int>, std::less<int>, std::allocator<std::pair<const int, std::pair<TGUser *, int> > > > {
	Rb_tree<int, std::pair<const int, std::pair<TGUser *, int> >, std::_Select1st<std::pair<const int, std::pair<TGUser *, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<TGUser *, int> > > > _M_t;
} map<int, std::pair<TGUser *, int>, std::less<int>, std::allocator<std::pair<const int, std::pair<TGUser *, int> > > >;

typedef struct Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int> >, std::less<int>, std::allocator<std::pair<const int, int> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int> >, std::less<int>, std::allocator<std::pair<const int, int> > >;

typedef struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int> > > {
	Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int> >, std::less<int>, std::allocator<std::pair<const int, int> > > _M_t;
} map<int, int, std::less<int>, std::allocator<std::pair<const int, int> > >;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	BOOL field1;
	int field2;
	int field3;
} SCD_Struct_TG14;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGContext* CGContextRef;

typedef struct Vector_impl {
	shared_ptr<TGContactListSection> _M_start;
	shared_ptr<TGContactListSection> _M_finish;
	shared_ptr<TGContactListSection> _M_end_of_storage;
} Vector_impl;

typedef struct vector<std::tr1::shared_ptr<TGContactListSection>, std::allocator<std::tr1::shared_ptr<TGContactListSection> > > {
	Vector_impl _M_impl;
} vector<std::tr1::shared_ptr<TGContactListSection>, std::allocator<std::tr1::shared_ptr<TGContactListSection> > >;

typedef struct Rb_tree<int, std::pair<const int, TGUser *>, std::_Select1st<std::pair<const int, TGUser *> >, std::less<int>, std::allocator<std::pair<const int, TGUser *> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, TGUser *>, std::_Select1st<std::pair<const int, TGUser *> >, std::less<int>, std::allocator<std::pair<const int, TGUser *> > >;

typedef struct map<int, TGUser *, std::less<int>, std::allocator<std::pair<const int, TGUser *> > > {
	Rb_tree<int, std::pair<const int, TGUser *>, std::_Select1st<std::pair<const int, TGUser *> >, std::less<int>, std::allocator<std::pair<const int, TGUser *> > > _M_t;
} map<int, TGUser *, std::less<int>, std::allocator<std::pair<const int, TGUser *> > >;

typedef struct Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >;

typedef struct set<int, std::less<int>, std::allocator<int> > {
	Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> > _M_t;
} set<int, std::less<int>, std::allocator<int> >;

typedef struct vector<TGVideoQualityRecord, std::allocator<TGVideoQualityRecord> > {
	Vector_impl _M_impl;
} vector<TGVideoQualityRecord, std::allocator<TGVideoQualityRecord> >;

typedef struct {
	BOOL flushQueueOnSeek;
	BOOL enableVolumeMixer;
	float equalizerBandFrequencies[24];
	unsigned readBufferSize;
	unsigned bufferSizeInSeconds;
	float secondsRequiredToStartPlaying;
	float gracePeriodAfterSeekInSeconds;
	float secondsRequiredToStartPlayingAfterBufferUnderun;
} SCD_Struct_ST25;

typedef struct OpaqueAUGraph* OpaqueAUGraphRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct AudioBufferList {
	unsigned mNumberBuffers;
	AudioBuffer mBuffers[1];
} AudioBufferList;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioFileStreamID* OpaqueAudioFileStreamIDRef;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct Rb_tree_impl<std::less<long long>, false> {
	less<long long> _M_key_compare;
	Rb_tree_node_base _M_header;
	unsigned long long _M_node_count;
} Rb_tree_impl<std::less<long long>, false>;

typedef struct Rb_tree<long long, long long, std::_Identity<long long>, std::less<long long>, std::allocator<long long> > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, long long, std::_Identity<long long>, std::less<long long>, std::allocator<long long> >;

typedef struct set<long long, std::less<long long>, std::allocator<long long> > {
	Rb_tree<long long, long long, std::_Identity<long long>, std::less<long long>, std::allocator<long long> > _M_t;
} set<long long, std::less<long long>, std::allocator<long long> >;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct vector<int, std::allocator<int> > {
	Vector_impl _M_impl;
} vector<int, std::allocator<int> >;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct map<long long, long long, std::less<long long>, std::allocator<std::pair<const long long, long long> > >_Rb_tree<long long, std::pair<const long long, long long>, std::_Select1st<std::pair<const long long, long long> >, std::less<long long>, std::allocator<std::pair<const long long, long long> > >_Rb_tree_impl<std::less<long long>, false>less<long long>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<long long, long long, std::less<long long>, std::allocator<std::pair<const long long, long long> > >Ref;

typedef struct map<long long, int, std::less<long long>, std::allocator<std::pair<const long long, int> > >_Rb_tree<long long, std::pair<const long long, int>, std::_Select1st<std::pair<const long long, int> >, std::less<long long>, std::allocator<std::pair<const long long, int> > >_Rb_tree_impl<std::less<long long>, false>less<long long>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<long long, int, std::less<long long>, std::allocator<std::pair<const long long, int> > >Ref;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_TG45;

typedef struct Prime_rehash_policy {
	float _M_max_load_factor;
	float _M_growth_factor;
	unsigned long long _M_next_resize;
} Prime_rehash_policy;

typedef struct unordered_map<int, TGUser *, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, TGUser *> >, false> {
	_Select1st<std::pair<const int, TGUser *> > _M_extract;
	equal_to<int> _M_eq;
	hash<int> _M_h1;
	_Mod_range_hashing _M_h2;
	allocator<std::tr1::__detail::_Hash_node<std::pair<const int, TGUser *>, false> > _M_node_allocator;
	_Hash_node<std::pair<const int, TGUser *>, false> _M_buckets;
	unsigned long long _M_bucket_count;
	unsigned long long _M_element_count;
	Prime_rehash_policy _M_rehash_policy;
} unordered_map<int, TGUser *, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, TGUser *> >, false>;

typedef struct Rb_tree<int, std::pair<const int, TGContactBinding *>, std::_Select1st<std::pair<const int, TGContactBinding *> >, std::less<int>, std::allocator<std::pair<const int, TGContactBinding *> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, TGContactBinding *>, std::_Select1st<std::pair<const int, TGContactBinding *> >, std::less<int>, std::allocator<std::pair<const int, TGContactBinding *> > >;

typedef struct map<int, TGContactBinding *, std::less<int>, std::allocator<std::pair<const int, TGContactBinding *> > > {
	Rb_tree<int, std::pair<const int, TGContactBinding *>, std::_Select1st<std::pair<const int, TGContactBinding *> >, std::less<int>, std::allocator<std::pair<const int, TGContactBinding *> > > _M_t;
} map<int, TGContactBinding *, std::less<int>, std::allocator<std::pair<const int, TGContactBinding *> > >;

typedef struct Rb_tree<int, std::pair<const int, TGPhonebookContact *>, std::_Select1st<std::pair<const int, TGPhonebookContact *> >, std::less<int>, std::allocator<std::pair<const int, TGPhonebookContact *> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, TGPhonebookContact *>, std::_Select1st<std::pair<const int, TGPhonebookContact *> >, std::less<int>, std::allocator<std::pair<const int, TGPhonebookContact *> > >;

typedef struct map<int, TGPhonebookContact *, std::less<int>, std::allocator<std::pair<const int, TGPhonebookContact *> > > {
	Rb_tree<int, std::pair<const int, TGPhonebookContact *>, std::_Select1st<std::pair<const int, TGPhonebookContact *> >, std::less<int>, std::allocator<std::pair<const int, TGPhonebookContact *> > > _M_t;
} map<int, TGPhonebookContact *, std::less<int>, std::allocator<std::pair<const int, TGPhonebookContact *> > >;

typedef struct Rb_tree<long long, std::pair<const long long, int>, std::_Select1st<std::pair<const long long, int> >, std::less<long long>, std::allocator<std::pair<const long long, int> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, int>, std::_Select1st<std::pair<const long long, int> >, std::less<long long>, std::allocator<std::pair<const long long, int> > >;

typedef struct map<long long, int, std::less<long long>, std::allocator<std::pair<const long long, int> > > {
	Rb_tree<long long, std::pair<const long long, int>, std::_Select1st<std::pair<const long long, int> >, std::less<long long>, std::allocator<std::pair<const long long, int> > > _M_t;
} map<long long, int, std::less<long long>, std::allocator<std::pair<const long long, int> > >;

typedef struct Rb_tree<int, std::pair<const int, std::pair<int, int> >, std::_Select1st<std::pair<const int, std::pair<int, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<int, int> > > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, std::pair<int, int> >, std::_Select1st<std::pair<const int, std::pair<int, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<int, int> > > >;

typedef struct map<int, std::pair<int, int>, std::less<int>, std::allocator<std::pair<const int, std::pair<int, int> > > > {
	Rb_tree<int, std::pair<const int, std::pair<int, int> >, std::_Select1st<std::pair<const int, std::pair<int, int> > >, std::less<int>, std::allocator<std::pair<const int, std::pair<int, int> > > > _M_t;
} map<int, std::pair<int, int>, std::less<int>, std::allocator<std::pair<const int, std::pair<int, int> > > >;

typedef struct Rb_tree<long long, std::pair<const long long, TGConversation *>, std::_Select1st<std::pair<const long long, TGConversation *> >, std::less<long long>, std::allocator<std::pair<const long long, TGConversation *> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, TGConversation *>, std::_Select1st<std::pair<const long long, TGConversation *> >, std::less<long long>, std::allocator<std::pair<const long long, TGConversation *> > >;

typedef struct map<long long, TGConversation *, std::less<long long>, std::allocator<std::pair<const long long, TGConversation *> > > {
	Rb_tree<long long, std::pair<const long long, TGConversation *>, std::_Select1st<std::pair<const long long, TGConversation *> >, std::less<long long>, std::allocator<std::pair<const long long, TGConversation *> > > _M_t;
} map<long long, TGConversation *, std::less<long long>, std::allocator<std::pair<const long long, TGConversation *> > >;

typedef struct Rb_tree<long long, std::pair<const long long, TGPeerCustomSettings>, std::_Select1st<std::pair<const long long, TGPeerCustomSettings> >, std::less<long long>, std::allocator<std::pair<const long long, TGPeerCustomSettings> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, TGPeerCustomSettings>, std::_Select1st<std::pair<const long long, TGPeerCustomSettings> >, std::less<long long>, std::allocator<std::pair<const long long, TGPeerCustomSettings> > >;

typedef struct map<long long, TGPeerCustomSettings, std::less<long long>, std::allocator<std::pair<const long long, TGPeerCustomSettings> > > {
	Rb_tree<long long, std::pair<const long long, TGPeerCustomSettings>, std::_Select1st<std::pair<const long long, TGPeerCustomSettings> >, std::less<long long>, std::allocator<std::pair<const long long, TGPeerCustomSettings> > > _M_t;
} map<long long, TGPeerCustomSettings, std::less<long long>, std::allocator<std::pair<const long long, TGPeerCustomSettings> > >;

typedef struct Rb_tree<long long, std::pair<const long long, long long>, std::_Select1st<std::pair<const long long, long long> >, std::less<long long>, std::allocator<std::pair<const long long, long long> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, long long>, std::_Select1st<std::pair<const long long, long long> >, std::less<long long>, std::allocator<std::pair<const long long, long long> > >;

typedef struct map<long long, long long, std::less<long long>, std::allocator<std::pair<const long long, long long> > > {
	Rb_tree<long long, std::pair<const long long, long long>, std::_Select1st<std::pair<const long long, long long> >, std::less<long long>, std::allocator<std::pair<const long long, long long> > > _M_t;
} map<long long, long long, std::less<long long>, std::allocator<std::pair<const long long, long long> > >;

typedef struct Rb_tree<long long, std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > >, std::_Select1st<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > >, std::less<long long>, std::allocator<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > >, std::_Select1st<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > >, std::less<long long>, std::allocator<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > > >;

typedef struct map<long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> >, std::less<long long>, std::allocator<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > > > {
	Rb_tree<long long, std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > >, std::_Select1st<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > >, std::less<long long>, std::allocator<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > > > _M_t;
} map<long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> >, std::less<long long>, std::allocator<std::pair<const long long, std::vector<TGEncryptionKeyData *, std::allocator<TGEncryptionKeyData *> > > > >;

typedef struct Rb_tree<long long, std::pair<const long long, bool>, std::_Select1st<std::pair<const long long, bool> >, std::less<long long>, std::allocator<std::pair<const long long, bool> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, bool>, std::_Select1st<std::pair<const long long, bool> >, std::less<long long>, std::allocator<std::pair<const long long, bool> > >;

typedef struct map<long long, bool, std::less<long long>, std::allocator<std::pair<const long long, bool> > > {
	Rb_tree<long long, std::pair<const long long, bool>, std::_Select1st<std::pair<const long long, bool> >, std::less<long long>, std::allocator<std::pair<const long long, bool> > > _M_t;
} map<long long, bool, std::less<long long>, std::allocator<std::pair<const long long, bool> > >;

typedef struct Rb_tree<long long, std::pair<const long long, NSDictionary *>, std::_Select1st<std::pair<const long long, NSDictionary *> >, std::less<long long>, std::allocator<std::pair<const long long, NSDictionary *> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, NSDictionary *>, std::_Select1st<std::pair<const long long, NSDictionary *> >, std::less<long long>, std::allocator<std::pair<const long long, NSDictionary *> > >;

typedef struct map<long long, NSDictionary *, std::less<long long>, std::allocator<std::pair<const long long, NSDictionary *> > > {
	Rb_tree<long long, std::pair<const long long, NSDictionary *>, std::_Select1st<std::pair<const long long, NSDictionary *> >, std::less<long long>, std::allocator<std::pair<const long long, NSDictionary *> > > _M_t;
} map<long long, NSDictionary *, std::less<long long>, std::allocator<std::pair<const long long, NSDictionary *> > >;

typedef struct Rb_tree<long long, std::pair<const long long, unsigned long>, std::_Select1st<std::pair<const long long, unsigned long> >, std::less<long long>, std::allocator<std::pair<const long long, unsigned long> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, unsigned long>, std::_Select1st<std::pair<const long long, unsigned long> >, std::less<long long>, std::allocator<std::pair<const long long, unsigned long> > >;

typedef struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long> > > {
	Rb_tree<long long, std::pair<const long long, unsigned long>, std::_Select1st<std::pair<const long long, unsigned long> >, std::less<long long>, std::allocator<std::pair<const long long, unsigned long> > > _M_t;
} map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long> > >;

typedef struct {
	int pts;
	int date;
	int seq;
	int unreadCount;
	int qts;
} SCD_Struct_TG70;

typedef struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int> > >_Rb_tree<int, std::pair<const int, int>, std::_Select1st<std::pair<const int, int> >, std::less<int>, std::allocator<std::pair<const int, int> > >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<int, int, std::less<int>, std::allocator<std::pair<const int, int> > >Ref;

typedef struct set<long long, std::less<long long>, std::allocator<long long> >_Rb_tree<long long, long long, std::_Identity<long long>, std::less<long long>, std::allocator<long long> >_Rb_tree_impl<std::less<long long>, false>less<long long>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* et<long long, std::less<long long>, std::allocator<long long> >Ref;

typedef struct set<int, std::less<int>, std::allocator<int> >_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* et<int, std::less<int>, std::allocator<int> >Ref;

typedef struct {
	unsigned char key[9];
} SCD_Struct_TG74;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_TG75;

typedef struct {
	unsigned char key[17];
} SCD_Struct_TG76;

typedef struct map<int, TGUserPresence, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > >_Rb_tree<int, std::pair<const int, TGUserPresence>, std::_Select1st<std::pair<const int, TGUserPresence> >, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<int, TGUserPresence, std::less<int>, std::allocator<std::pair<const int, TGUserPresence> > >Ref;

typedef struct map<int, TGUser *, std::less<int>, std::allocator<std::pair<const int, TGUser *> > >_Rb_tree<int, std::pair<const int, TGUser *>, std::_Select1st<std::pair<const int, TGUser *> >, std::less<int>, std::allocator<std::pair<const int, TGUser *> > >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<int, TGUser *, std::less<int>, std::allocator<std::pair<const int, TGUser *> > >Ref;

typedef struct map<int, long long, std::less<int>, std::allocator<std::pair<const int, long long> > >_Rb_tree<int, std::pair<const int, long long>, std::_Select1st<std::pair<const int, long long> >, std::less<int>, std::allocator<std::pair<const int, long long> > >_Rb_tree_impl<std::less<int>, false>less<int>_Rb_tree_node_basei_Rb_tree_node_base_Rb_tree_node_base_Rb_tree_node_baseQ* ap<int, long long, std::less<int>, std::allocator<std::pair<const int, long long> > >Ref;

typedef struct {
	unsigned long long index;
	unsigned long long count;
} SCD_Struct_TG80;

typedef struct OpusEncoder* OpusEncoderRef;

typedef struct {
	void readdata;
	long long total_samples_per_channel;
	int rawmode;
	int channels;
	long long rate;
	int gain;
	int samplesize;
	int endianness;
	char* infilename;
	int ignorelength;
	int skip;
	int extraout;
	char* comments;
	int comments_length;
	int copy_comments;
} SCD_Struct_TG82;

typedef struct {
	char* body_data;
	long long body_storage;
	long long body_fill;
	long long body_returned;
	int lacing_vals;
	long long granule_vals;
	long long lacing_storage;
	long long lacing_fill;
	long long lacing_packet;
	long long lacing_returned;
	unsigned char header[282];
	int header_fill;
	int e_o_s;
	int b_o_s;
	long long serialno;
	long long pageno;
	long long packetno;
	long long granulepos;
} SCD_Struct_TG83;

typedef struct {
	char* header;
	long long header_len;
	char* body;
	long long body_len;
} SCD_Struct_TG84;

typedef struct {
	char* packet;
	long long bytes;
	long long b_o_s;
	long long e_o_s;
	long long granulepos;
	long long packetno;
} SCD_Struct_TG85;

typedef struct {
	int version;
	int channels;
	int preskip;
	unsigned input_sample_rate;
	int gain;
	int channel_mapping;
	int nb_streams;
	int nb_coupled;
	unsigned char stream_map[255];
} SCD_Struct_TG86;

typedef struct __CTFont* CTFontRef;

typedef struct {
	char* field1;
	unsigned long long field2;
} SCD_Struct_PS88;

typedef struct MDB_txn* MDB_txnRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct GPUTextureOptions {
	unsigned minFilter;
	unsigned magFilter;
	unsigned wrapS;
	unsigned wrapT;
	unsigned internalFormat;
	unsigned format;
	unsigned type;
} GPUTextureOptions;

typedef struct vector<TGServerSalt, std::allocator<TGServerSalt> > {
	Vector_impl _M_impl;
} vector<TGServerSalt, std::allocator<TGServerSalt> >;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct _shared_count<__gnu_cxx::_Lock_policy::_S_atomic> {
	_Sp_counted_base<__gnu_cxx::_Lock_policy::_S_atomic> _M_pi;
} shared_count<__gnu_cxx::_Lock_policy::_S_atomic>;

typedef struct shared_ptr<void> {
	void _M_ptr;
	shared_count<__gnu_cxx::_Lock_policy::_S_atomic> _M_refcount;
} shared_ptr<void>;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	SCD_Struct_TG45 field1;
	SCD_Struct_TG45 field2;
} SCD_Struct_TG97;

typedef struct vector<FilePart, std::allocator<FilePart> > {
	Vector_impl _M_impl;
} vector<FilePart, std::allocator<FilePart> >;

typedef struct CC_MD5state_st {
	unsigned A;
	unsigned B;
	unsigned C;
	unsigned D;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	int num;
} CC_MD5state_st;

typedef struct MDB_cursor* MDB_cursorRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PG102;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	int type;
	int value;
} SCD_Struct_TG104;

typedef struct MDB_env* MDB_envRef;

typedef struct {
	CGPoint center;
	CGPoint span;
} SCD_Struct_TG106;

typedef struct {
	SCD_Struct_PG102 start;
	SCD_Struct_PG102 duration;
} SCD_Struct_TG107;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct unordered_map<int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false>, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > >, false> {
	_Select1st<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > > _M_extract;
	equal_to<int> _M_eq;
	hash<int> _M_h1;
	_Mod_range_hashing _M_h2;
	allocator<std::tr1::__detail::_Hash_node<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> >, false> > _M_node_allocator;
	_Hash_node<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> >, false> _M_buckets;
	unsigned long long _M_bucket_count;
	unsigned long long _M_element_count;
	Prime_rehash_policy _M_rehash_policy;
} unordered_map<int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false>, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > >, false>;

typedef struct vector<TGLinePosition, std::allocator<TGLinePosition> > {
	Vector_impl _M_impl;
} vector<TGLinePosition, std::allocator<TGLinePosition> >;

typedef struct vector<TGLinkData, std::allocator<TGLinkData> > {
	Vector_impl _M_impl;
} vector<TGLinkData, std::allocator<TGLinkData> >;

typedef struct unordered_map<int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false>, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > >, false>_Select1st<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > >equal_to<int>hash<int>_Mod_range_hashingallocator<std::tr1::__detail::_Hash_node<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> >, false> >_Hash_node<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> >, false>QQ_Prime_rehash_policyffQ* nordered_map<int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false>, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::tr1::unordered_map<int, int, std::tr1::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, int> >, false> > >, false>Ref;

typedef struct OggOpusFile* OggOpusFileRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct vector<TGImageSizeRecord, std::allocator<TGImageSizeRecord> > {
	Vector_impl _M_impl;
} vector<TGImageSizeRecord, std::allocator<TGImageSizeRecord> >;

typedef struct {
	BOOL online;
	int lastSeen;
	int temporaryLastSeen;
} SCD_Struct_TG116;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct Rb_tree<int, std::pair<const int, TGVideoPartData>, std::_Select1st<std::pair<const int, TGVideoPartData> >, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, TGVideoPartData>, std::_Select1st<std::pair<const int, TGVideoPartData> >, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData> > >;

typedef struct map<int, TGVideoPartData, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData> > > {
	Rb_tree<int, std::pair<const int, TGVideoPartData>, std::_Select1st<std::pair<const int, TGVideoPartData> >, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData> > > _M_t;
} map<int, TGVideoPartData, std::less<int>, std::allocator<std::pair<const int, TGVideoPartData> > >;

typedef struct vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > {
	Vector_impl _M_impl;
} vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >;

typedef struct __CTLine* CTLineRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_PG123;

typedef struct vector<std::pair<ASHandle *, NSString *>, std::allocator<std::pair<ASHandle *, NSString *> > > {
	Vector_impl _M_impl;
} vector<std::pair<ASHandle *, NSString *>, std::allocator<std::pair<ASHandle *, NSString *> > >;

typedef struct vector<ASHandle *, std::allocator<ASHandle *> > {
	Vector_impl _M_impl;
} vector<ASHandle *, std::allocator<ASHandle *> >;

typedef struct Rb_tree<int, std::pair<const int, float>, std::_Select1st<std::pair<const int, float> >, std::less<int>, std::allocator<std::pair<const int, float> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, float>, std::_Select1st<std::pair<const int, float> >, std::less<int>, std::allocator<std::pair<const int, float> > >;

typedef struct map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > > {
	Rb_tree<int, std::pair<const int, float>, std::_Select1st<std::pair<const int, float> >, std::less<int>, std::allocator<std::pair<const int, float> > > _M_t;
} map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >;

typedef struct Rb_tree_impl<std::less<long>, false> {
	less<long> _M_key_compare;
	Rb_tree_node_base _M_header;
	unsigned long long _M_node_count;
} Rb_tree_impl<std::less<long>, false>;

typedef struct Rb_tree<long, std::pair<const long, UIView<TGModernView> *>, std::_Select1st<std::pair<const long, UIView<TGModernView> *> >, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > > {
	Rb_tree_impl<std::less<long>, false> _M_impl;
} Rb_tree<long, std::pair<const long, UIView<TGModernView> *>, std::_Select1st<std::pair<const long, UIView<TGModernView> *> >, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > >;

typedef struct map<long, UIView<TGModernView> *, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > > {
	Rb_tree<long, std::pair<const long, UIView<TGModernView> *>, std::_Select1st<std::pair<const long, UIView<TGModernView> *> >, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > > _M_t;
} map<long, UIView<TGModernView> *, std::less<long>, std::allocator<std::pair<const long, UIView<TGModernView> *> > >;

typedef struct {
	int firstMessageId;
	int firstLocalMessageId;
	int firstDate;
	int lastMessageId;
	int lastLocalMessageId;
	int lastDate;
} SCD_Struct_TG131;

typedef struct Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double> >, std::less<int>, std::allocator<std::pair<const int, double> > > {
	Rb_tree_impl<std::less<int>, false> _M_impl;
} Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double> >, std::less<int>, std::allocator<std::pair<const int, double> > >;

typedef struct map<int, double, std::less<int>, std::allocator<std::pair<const int, double> > > {
	Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double> >, std::less<int>, std::allocator<std::pair<const int, double> > > _M_t;
} map<int, double, std::less<int>, std::allocator<std::pair<const int, double> > >;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct vector<TGDecorationViewAttrubutes, std::allocator<TGDecorationViewAttrubutes> > {
	Vector_impl _M_impl;
} vector<TGDecorationViewAttrubutes, std::allocator<TGDecorationViewAttrubutes> >;

typedef struct Rb_tree<long long, std::pair<const long long, NSString *>, std::_Select1st<std::pair<const long long, NSString *> >, std::less<long long>, std::allocator<std::pair<const long long, NSString *> > > {
	Rb_tree_impl<std::less<long long>, false> _M_impl;
} Rb_tree<long long, std::pair<const long long, NSString *>, std::_Select1st<std::pair<const long long, NSString *> >, std::less<long long>, std::allocator<std::pair<const long long, NSString *> > >;

typedef struct map<long long, NSString *, std::less<long long>, std::allocator<std::pair<const long long, NSString *> > > {
	Rb_tree<long long, std::pair<const long long, NSString *>, std::_Select1st<std::pair<const long long, NSString *> >, std::less<long long>, std::allocator<std::pair<const long long, NSString *> > > _M_t;
} map<long long, NSString *, std::less<long long>, std::allocator<std::pair<const long long, NSString *> > >;

typedef struct {
	BOOL downloaded;
	BOOL downloading;
	double progress;
} SCD_Struct_TG138;

typedef struct {
	unsigned char field1[16];
} SCD_Struct_MT139;

typedef struct aes_key_st {
	unsigned rd_key[60];
	int rounds;
} aes_key_st;

typedef struct ctr_state {
	unsigned char ivec[16];
	unsigned num;
	unsigned char ecount[16];
} ctr_state;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_GC142;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct SSLContext* SSLContextRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_BI147;

typedef struct _darwin_sigaltstack {
	void ss_sp;
	unsigned long long ss_size;
	int ss_flags;
} darwin_sigaltstack;

typedef struct __CFUUID* CFUUIDRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct PLCrashHostInfoVersion {
	unsigned long long major;
	unsigned long long minor;
	unsigned long long revision;
} PLCrashHostInfoVersion;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BI152;

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[13];
	unsigned ports[13];
	int behaviors[13];
	int flavors[13];
} plcrash_mach_exception_port_set;

typedef struct SpringSolver<POP::Vector4<double> >* SpringSolver<POP::Vector4<double> >Ref;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > >;

typedef struct _list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __prev_;
	__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> __next_;
} list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *>;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > {
	list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > __size_alloc_;
} list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	double field6;
} SCD_Struct_PO160;
