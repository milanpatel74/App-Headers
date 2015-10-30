/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/_SLKStar.h>
#import <Slack/SLKGenerics.h>

@class SLKMessage, NSString, NSManagedObjectID, NSManagedObjectContext;

@interface SLKStar : _SLKStar <SLKGenerics> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SLKMessage * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,readonly) NSString * predicateKey; 
@property (nonatomic,readonly) unsigned long long contextType; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
+(id)starForId:(id)arg1 contextType:(unsigned long long)arg2 ;
-(NSString *)predicateKey;
-(unsigned long long)type;
-(SLKMessage *)message;
@end
