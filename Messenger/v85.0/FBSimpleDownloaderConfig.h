/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSimpleDownloaderConfig : FBValueObject <NSCopying> {

	NSString* _diskCacheName;
	NSString* _fileExtensionOverride;

}

@property (nonatomic,copy,readonly) NSString * diskCacheName;                      //@synthesize diskCacheName=_diskCacheName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtensionOverride;              //@synthesize fileExtensionOverride=_fileExtensionOverride - In the implementation block
-(id)initWithDiskCacheName:(id)arg1 fileExtensionOverride:(id)arg2 ;
-(NSString *)diskCacheName;
-(NSString *)fileExtensionOverride;
@end
