/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_T16;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_T17;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
} SCD_Struct_T18;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	CGPoint field1;
	CGSize field2;
	CGAffineTransform field3;
	BOOL field4;
} SCD_Struct_T110;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_T111;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	CGRect headingLabelFrame;
	CGRect actionLabelFrame;
	CGRect iconImageFrame;
	CGRect disclosureIndicatorFrame;
	CGRect hideControlFrame;
	CGRect bottomBorderFrame;
	CGRect middleBorderFrame;
	CGRect fullSizeFrame;
	CGRect smallSizeFrame;
} SCD_Struct_T113;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
} SCD_Struct_T116;

typedef struct __CTFrame* CTFrameRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
} SCD_Struct_T119;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
	CGRect field4;
	CGRect field5;
} SCD_Struct_T121;

typedef struct __CFArray* CFArrayRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFData* CFDataRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	unsigned char bugFix;
	unsigned char revision;
	unsigned char minor;
	unsigned char major;
} SCD_Struct_TF26;

typedef struct {
	SCD_Struct_T111 start;
	SCD_Struct_T111 duration;
} SCD_Struct_TF27;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 3;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 2;
} SCD_Struct_TF28;

typedef struct {
	int lock;
	int predicate;
} SCD_Struct_TF29;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
} SCD_Struct_TF30;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_TF31;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_TF32;

typedef struct {
	double supplementaryNavigationBarRetraction;
	double lastDragContentOffsetY;
	long long scrollingToTop;
	unsigned dragging : 1;
	unsigned inDidScroll : 1;
	unsigned inHideToolbar : 1;
	unsigned popping : 1;
	unsigned pushing : 1;
	unsigned settingViewControllers : 1;
	unsigned transitioning : 1;
	unsigned savedNavigationBarTranslucency : 1;
	unsigned savedSupplementaryNavigationBarTranslucency : 1;
} SCD_Struct_TF33;

typedef struct {
	long long x;
	long long y;
} SCD_Struct_TC34;

typedef struct {
	unsigned long long field1;
	double field2;
	double field3;
	BOOL field4;
	CGSize field5;
	BOOL field6;
	UIEdgeInsets field7;
	BOOL field8;
	double field9;
	BOOL field10;
	CGAffineTransform field11;
} SCD_Struct_TF35;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct __CFString* CFStringRef;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGPath* CGPathRef;

typedef struct CGGradient* CGGradientRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CTLine* CTLineRef;

typedef struct __CTParagraphStyle* CTParagraphStyleRef;

typedef struct {
	double field1;
	BOOL field2;
} SCD_Struct_TF45;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	void field1;
	unsigned long long field2;
} SCD_Struct_CJ49;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	BOOL field3;
} SCD_Struct_TF50;

typedef struct {
	unsigned long long sessionReceiveWindowInBytes;
	unsigned long long streamReceiveWindowInBytes;
	long long headerCompressionLevel;
	double connectTimeout;
	long long proxyPort;
	unsigned parallelTCPConnectionsEnabled : 1;
	unsigned settingsMinorVersionEnabled : 1;
	unsigned TCPNoDelayEnabled : 1;
	unsigned proxyEnabled : 1;
	unsigned enforceSessionPoolCorrectness : 1;
} SCD_Struct_TN51;

typedef struct {
	unsigned executionMode : 8;
	unsigned redirectPolicy : 8;
	unsigned responseDataConsumptionMode : 8;
	unsigned protocolOptions : 8;
	double idleTimeout;
	double attemptTimeout;
	double operationTimeout;
	double deferrableInterval;
	unsigned cachePolicy : 8;
	unsigned networkServiceType : 8;
	unsigned cookieAcceptPolicy : 4;
	unsigned contributeToExecutingNetworkConnectionsCount : 1;
	unsigned skipHostSanitization : 1;
	unsigned allowsCellularAccess : 1;
	unsigned discretionary : 1;
	unsigned shouldLaunchAppForBackgroundEvents : 1;
	unsigned shouldSetCookies : 1;
} SCD_Struct_TN52;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_SP58;

typedef struct {
	BOOL set;
	unsigned char flags;
	int value;
} SCD_Struct_SP59;

typedef struct {
	unsigned short version;
	unsigned short type;
} SCD_Struct_SP60;

typedef struct {
	unsigned streamId;
} SCD_Struct_SP61;

typedef struct {
	BOOL ctrl;
	/*function pointer*/void* ;
	SCD_Struct_SP60 control;
	SCD_Struct_SP61) data;
	unsigned char flags;
	unsigned length;
} SCD_Struct_SP62;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct TFNFileFunctionLine {
	char* file;
	char* function;
	int line;
} TFNFileFunctionLine;

typedef struct MGXCubicBezier3D* MGXCubicBezier3DRef;

typedef struct CGColor* CGColorRef;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_MG67;

typedef union {
	long long index;
	long long integerValues[4];
	double floatValues[4];
	CGPoint ease;
	SCD_Struct_MG67 position;
	UIEdgeInsets color;
} SCD_Union_MG68;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_CL71;

typedef struct {
	void field1;
	unsigned long long field2;
	void field3;
	void field4;
	void field5;
} SCD_Struct_CL72;

typedef struct {
	char field1[33];
	BOOL field2;
	SCD_Struct_CL71 field3;
	SCD_Struct_CL71 field4;
	SCD_Struct_CL72 field5;
	unsigned char field6;
	unsigned long field7;
	unsigned short field8;
	M field9;
	a field10;
	char field11;
	h field12;
	O field13;
	unsigned short field14;
	long field15;
	int field16;
	char field17;
	e field18;
} SCD_Struct_CL73;

typedef struct {
	char* field1;
	void field2;
	BOOL field3;
	void field4;
	char* field5;
	char* field6;
	char* field7;
	char* field8;
	char* field9;
	unsigned field10;
	BOOL field11;
	BOOL field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
} SCD_Struct_CL74;

typedef struct {
	char* field1;
	char* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_CL75;

typedef struct {
	unsigned major;
	unsigned minor;
	unsigned bugfix;
} SCD_Struct_FA76;
