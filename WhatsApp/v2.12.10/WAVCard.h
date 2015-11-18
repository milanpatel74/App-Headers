/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface WAVCard : NSObject {

	NSString* _contactName;
	NSString* _vCardString;

}

@property (nonatomic,copy) NSString * contactName;              //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSString * vCardString;              //@synthesize vCardString=_vCardString - In the implementation block
+(BOOL)isFieldNameForIMServiceValid:(id)arg1 ;
+(id)labelFromFieldDescriptions:(id)arg1 ;
+(BOOL)canShareInstantMessagingService:(id)arg1 ;
+(id)mergedContactFromVCardString:(id)arg1 ;
-(void)setVCardString:(NSString *)arg1 ;
-(NSString *)vCardString;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
@end
