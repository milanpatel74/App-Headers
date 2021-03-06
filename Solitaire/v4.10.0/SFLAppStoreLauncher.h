/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString, UIViewController, SKStoreProductViewController;

@interface SFLAppStoreLauncher : NSObject <SKStoreProductViewControllerDelegate> {

	NSString* applicationId;
	UIViewController* displayingViewController;
	SKStoreProductViewController* productViewController;
	BOOL _allowPrefetch;

}

@property (readonly) NSString * applicationId; 
@property (__weak,readonly) UIViewController * displayingViewController; 
@property (assign,nonatomic) BOOL allowPrefetch;                                      //@synthesize allowPrefetch=_allowPrefetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowPrefetch:(BOOL)arg1 ;
-(BOOL)allowPrefetch;
-(void)prefetch;
-(id)initWithViewController:(id)arg1 appId:(id)arg2 ;
-(UIViewController *)displayingViewController;
-(void)launch;
-(NSString *)applicationId;
-(void)fetch;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

