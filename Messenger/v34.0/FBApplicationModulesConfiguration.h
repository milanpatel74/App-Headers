/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface FBApplicationModulesConfiguration : NSObject {

	NSArray* _loginIndependentModuleFactories;
	NSArray* _loginDependentModuleFactories;

}

@property (nonatomic,copy,readonly) NSArray * loginIndependentModuleFactories;              //@synthesize loginIndependentModuleFactories=_loginIndependentModuleFactories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loginDependentModuleFactories;                //@synthesize loginDependentModuleFactories=_loginDependentModuleFactories - In the implementation block
-(id)initWithLoginIndependentModuleFactories:(id)arg1 loginDependentModuleFactories:(id)arg2 ;
-(NSArray *)loginIndependentModuleFactories;
-(NSArray *)loginDependentModuleFactories;
-(id)init;
@end
