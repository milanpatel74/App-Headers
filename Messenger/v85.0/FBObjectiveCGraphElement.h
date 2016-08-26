/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBObjectGraphConfiguration;

@interface FBObjectiveCGraphElement : NSObject {

	NSArray* _namePath;
	id _object;
	FBObjectGraphConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) NSArray * namePath;                                 //@synthesize namePath=_namePath - In the implementation block
@property (assign,nonatomic,__weak) id object;                                          //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) FBObjectGraphConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)classNameOrNull;
-(id)initWithObject:(id)arg1 configuration:(id)arg2 ;
-(id)initWithObject:(id)arg1 configuration:(id)arg2 namePath:(id)arg3 ;
-(id)allRetainedObjects;
-(NSArray *)namePath;
-(unsigned long long)objectAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(FBObjectGraphConfiguration *)configuration;
-(id)initWithObject:(id)arg1 ;
-(Class)objectClass;
@end
