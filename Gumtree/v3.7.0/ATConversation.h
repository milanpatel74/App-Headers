/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSCoding.h>
#import <Gumtree/ATJSONModel.h>

@class NSString;

@interface ATConversation : NSObject <NSCoding, ATJSONModel> {

	NSString* token;
	NSString* personID;
	NSString* deviceID;

}

@property (nonatomic,retain) NSString * token; 
@property (nonatomic,retain) NSString * personID; 
@property (nonatomic,retain) NSString * deviceID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInstanceWithJSON:(id)arg1 ;
-(void)updateWithJSON:(id)arg1 ;
-(id)apiJSON;
-(id)appReleaseJSON;
-(id)sdkJSON;
-(id)apiUpdateJSON;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
@end
