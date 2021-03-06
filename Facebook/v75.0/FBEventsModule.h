/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBEventsComposerViewControllerDelegate.h>
#import <Facebook/FBForceTouchConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBNativeArticleLoaderProvidingModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>

@class FBEventCreateURLInfo, NSString;

@interface FBEventsModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBEventsComposerViewControllerDelegate, FBForceTouchConfiguringModule, FBIntentHandlerConfiguringModule, FBNativeArticleLoaderProvidingModule, FBURLSegueConfiguringModule> {

	FBEventCreateURLInfo* _createEventURLInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(id)forceTouchHandlers:(id)arg1 ;
+(id)loaderProviders;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(id)supportedKeys;
-(id)defaultMenuItem;
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(void)eventComposerDidCancel:(id)arg1 ;
-(void)eventComposer:(id)arg1 didCreateEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didEditEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didDeleteEvent:(id)arg2 ;
-(void)bridgeDidInitializeModule:(id)arg1 ;
-(void)dealloc;
-(id)ID;
@end

