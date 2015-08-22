/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>
#import <SportyTrader/FBGraphObject.h>

@protocol FBGraphObject <NSObject>
@property (assign,nonatomic) BOOL provisionedForPost; 
@optional
-(void)setProvisionedForPost:(BOOL)arg1;
-(BOOL)provisionedForPost;

@required
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface FBGraphObject : NSMutableDictionary <FBGraphObject> {

	NSMutableDictionary* _jsonObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL provisionedForPost; 
+(id)graphObjectWrappingDictionary:(id)arg1 ;
+(id)graphObjectWrappingObject:(id)arg1 ;
+(id)graphObject;
+(id)openGraphObjectForPostWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 ;
+(unsigned long long)inferredImplTypeForSelector:(SEL)arg1 ;
+(BOOL)isProtocolImplementationInferable:(id)arg1 checkFBGraphObjectAdoption:(BOOL)arg2 ;
+(id)openGraphActionForPost;
+(id)openGraphObjectForPost;
+(BOOL)isGraphObjectID:(id)arg1 sameAs:(id)arg2 ;
-(void)setProvisionedForPost:(BOOL)arg1 ;
-(void)setObjectDescription:(id)arg1 ;
-(id)graphObjectifyAtKey:(id)arg1 ;
-(void)graphObjectifyAll;
-(id)initWrappingDictionary:(id)arg1 ;
-(BOOL)provisionedForPost;
-(id)objectDescription;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)count;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectID;
-(void)setObjectID:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
