/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTInvalidating.h>

@protocol RCTBridgeDelegate;
@class NSURL, NSDictionary, NSLock, RCTUIManager, RCTRedBox, RCTDevMenu, RCTAccessibilityManager, RCTImageStoreManager, RCTImageLoader, RCTNetworking, ALAssetsLibrary, NSArray, RCTPerformanceLogger, NSString;

@interface RCTBridge : NSObject <RCTInvalidating> {

	NSURL* _delegateBundleURL;
	NSURL* _bundleURL;
	Class _executorClass;
	id<RCTBridgeDelegate> _delegate;
	NSDictionary* _launchOptions;
	long long _flowID;
	CFDictionaryRef _flowIDMap;
	NSLock* _flowIDMapLock;
	RCTBridge* _batchedBridge;
	/*^block*/id _moduleProvider;

}

@property (nonatomic,readonly) RCTUIManager * uiManager; 
@property (nonatomic,readonly) RCTRedBox * redBox; 
@property (nonatomic,readonly) RCTDevMenu * devMenu; 
@property (nonatomic,readonly) RCTAccessibilityManager * accessibilityManager; 
@property (nonatomic,readonly) RCTImageStoreManager * imageStoreManager; 
@property (nonatomic,readonly) RCTImageLoader * imageLoader; 
@property (nonatomic,readonly) RCTNetworking * networking; 
@property (nonatomic,readonly) ALAssetsLibrary * assetsLibrary; 
@property (assign,nonatomic) long long flowID;                                              //@synthesize flowID=_flowID - In the implementation block
@property (assign,nonatomic) CFDictionaryRef flowIDMap;                                     //@synthesize flowIDMap=_flowIDMap - In the implementation block
@property (nonatomic,retain) NSLock * flowIDMapLock;                                        //@synthesize flowIDMapLock=_flowIDMapLock - In the implementation block
@property (retain) RCTBridge * batchedBridge;                                               //@synthesize batchedBridge=_batchedBridge - In the implementation block
@property (nonatomic,copy,readonly) id moduleProvider;                                      //@synthesize moduleProvider=_moduleProvider - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moduleClasses; 
@property (nonatomic,retain) Class executorClass;                                           //@synthesize executorClass=_executorClass - In the implementation block
@property (nonatomic,__weak,readonly) id<RCTBridgeDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * launchOptions;                           //@synthesize launchOptions=_launchOptions - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) RCTPerformanceLogger * performanceLogger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCurrentBridge:(id)arg1 ;
+(id)currentBridge;
+(void)initialize;
-(RCTUIManager *)uiManager;
-(RCTRedBox *)redBox;
-(RCTDevMenu *)devMenu;
-(RCTAccessibilityManager *)accessibilityManager;
-(id)eventDispatcher;
-(RCTImageStoreManager *)imageStoreManager;
-(RCTImageLoader *)imageLoader;
-(RCTNetworking *)networking;
-(id)relayNative;
-(void)CXX_createBatchedBridge;
-(ALAssetsLibrary *)assetsLibrary;
-(BOOL)moduleIsInitialized:(Class)arg1 ;
-(id)moduleForClass:(Class)arg1 ;
-(long long)flowID;
-(RCTBridge *)batchedBridge;
-(RCTPerformanceLogger *)performanceLogger;
-(id)initWithDelegate:(id)arg1 launchOptions:(id)arg2 ;
-(void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)whitelistedModulesDidChange;
-(id)initWithBundleURL:(id)arg1 moduleProvider:(/*^block*/id)arg2 launchOptions:(id)arg3 ;
-(void)setBatchedBridge:(RCTBridge *)arg1 ;
-(id)moduleProvider;
-(Class)executorClass;
-(void)setExecutorClass:(Class)arg1 ;
-(NSArray *)moduleClasses;
-(id)moduleForName:(id)arg1 ;
-(void)bindKeys;
-(void)enqueueCallback:(id)arg1 args:(id)arg2 ;
-(BOOL)isBatchActive;
-(void)setFlowID:(long long)arg1 ;
-(CFDictionaryRef)flowIDMap;
-(void)setFlowIDMap:(CFDictionaryRef)arg1 ;
-(id)modulesConformingToProtocol:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(/*^block*/id)arg3 launchOptions:(id)arg4 ;
-(void)createBatchedBridge;
-(NSLock *)flowIDMapLock;
-(void)setFlowIDMapLock:(NSLock *)arg1 ;
-(void)enqueueJSCall:(id)arg1 args:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id<RCTBridgeDelegate>)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(NSURL *)bundleURL;
-(BOOL)isLoading;
-(NSDictionary *)launchOptions;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setUp;
@end
