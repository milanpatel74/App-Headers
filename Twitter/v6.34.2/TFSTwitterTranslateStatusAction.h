/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAction.h>

@class TFNTwitterStatus, NSString;

@interface TFSTwitterTranslateStatusAction : NSObject <TFSTwitterAction> {

	TFNTwitterStatus* _status;
	NSString* _languageCode;

}

@property (nonatomic,retain) TFNTwitterStatus * status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                //@synthesize languageCode=_languageCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStatus:(id)arg1 languageCode:(id)arg2 ;
-(id)request;
-(NSString *)languageCode;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

