/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:06 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, GPBFileDescriptor, NSString;

@interface GPBDescriptor : NSObject <NSCopying> {

	NSArray* fields_;
	NSArray* oneofs_;
	unsigned storageSize_;
	Class messageClass_;
	GPBFileDescriptor* file_;
	BOOL wireFormat_;
	unsigned extensionRangesCount_;
	const GPBExtensionRange* extensionRanges_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
@property (nonatomic,readonly) NSArray * oneofs; 
@property (nonatomic,readonly) const GPBExtensionRange* extensionRanges; 
@property (nonatomic,readonly) unsigned extensionRangesCount; 
@property (nonatomic,readonly) GPBFileDescriptor * file; 
@property (getter=isWireFormat,nonatomic,readonly) BOOL wireFormat; 
@property (nonatomic,readonly) Class messageClass; 
+(id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 file:(id)arg3 fields:(void*)arg4 fieldCount:(unsigned)arg5 storageSize:(unsigned)arg6 flags:(unsigned)arg7 ;
-(void)setupExtraTextInfo:(const char*)arg1 ;
-(const GPBExtensionRange*)extensionRanges;
-(unsigned)extensionRangesCount;
-(BOOL)isWireFormat;
-(void)setupOneofs:(const char**)arg1 count:(unsigned)arg2 firstHasIndex:(int)arg3 ;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)initWithClass:(Class)arg1 file:(id)arg2 fields:(id)arg3 storageSize:(unsigned)arg4 wireFormat:(BOOL)arg5 ;
-(void)setupExtensionRanges:(const GPBExtensionRange*)arg1 count:(int)arg2 ;
-(id)fieldWithName:(id)arg1 ;
-(id)oneofWithName:(id)arg1 ;
-(NSArray *)oneofs;
-(void)dealloc;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)fields;
-(Class)messageClass;
-(GPBFileDescriptor *)file;
@end
