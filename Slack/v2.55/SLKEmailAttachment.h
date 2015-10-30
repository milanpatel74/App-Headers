/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SLKEmailAttachment : NSObject {

	NSString* _name;
	NSString* _url;
	NSString* _mimeType;
	NSNumber* _size;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * url;                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSNumber * size;                  //@synthesize size=_size - In the implementation block
-(void)downloadAttachmentWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end

