/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSTwitterModel.h>

@class NSString;

@interface TFNTwitterInstallReferral : NSObject <TFSTwitterModel> {

	NSString* _campaignID;
	long long _listID;
	NSString* _listOwnerScreenName;
	NSString* _listSlug;
	long long _promotedAccountID;

}

@property (nonatomic,copy,readonly) NSString * campaignID;                       //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,readonly) long long listID;                                 //@synthesize listID=_listID - In the implementation block
@property (nonatomic,copy,readonly) NSString * listOwnerScreenName;              //@synthesize listOwnerScreenName=_listOwnerScreenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * listSlug;                         //@synthesize listSlug=_listSlug - In the implementation block
@property (nonatomic,readonly) long long promotedAccountID;                      //@synthesize promotedAccountID=_promotedAccountID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSONDictionary:(id)arg1 ;
-(long long)listID;
-(id)suggestedUserList;
-(long long)promotedAccountID;
-(id)initWithJSONData:(id)arg1 error:(id*)arg2 ;
-(NSString *)campaignID;
-(NSString *)listOwnerScreenName;
-(NSString *)listSlug;
-(id)init;
-(NSString *)description;
-(BOOL)isValid;
@end
