/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MWSTrackProviderInitializationDelegate;
@class NSObject, NSTimer;

@interface MWSTrackProvider : NSObject {

	BOOL _allowDebugging;
	int _type;
	float _initializeTimeout;
	float _variableTimeout;
	int _state;
	int _approvedProviderCapabilitiesFlag;
	NSObject*<MWSTrackProviderInitializationDelegate> _delegateInitialization;
	NSTimer* _initializeTimeoutTimer;

}

@property (assign,nonatomic,__weak) NSObject*<MWSTrackProviderInitializationDelegate> delegateInitialization;              //@synthesize delegateInitialization=_delegateInitialization - In the implementation block
@property (nonatomic,readonly) int type;                                                                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float initializeTimeout;                                                                      //@synthesize initializeTimeout=_initializeTimeout - In the implementation block
@property (assign,nonatomic) float variableTimeout;                                                                        //@synthesize variableTimeout=_variableTimeout - In the implementation block
@property (nonatomic,retain) NSTimer * initializeTimeoutTimer;                                                             //@synthesize initializeTimeoutTimer=_initializeTimeoutTimer - In the implementation block
@property (nonatomic,readonly) int state;                                                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL allowDebugging;                                                                        //@synthesize allowDebugging=_allowDebugging - In the implementation block
@property (assign,nonatomic) int approvedProviderCapabilitiesFlag;                                                         //@synthesize approvedProviderCapabilitiesFlag=_approvedProviderCapabilitiesFlag - In the implementation block
-(void)approveProviderCapabilities:(int)arg1 ;
-(void)setDelegateInitialization:(NSObject*<MWSTrackProviderInitializationDelegate>)arg1 ;
-(BOOL)isProviderOfCapability:(int)arg1 ;
-(BOOL)canDoPostInitializationActionRequiringCapability:(int)arg1 ;
-(BOOL)allowDebugging;
-(void)sendEvent:(id)arg1 Dictionary:(id)arg2 Value:(id)arg3 Info:(id)arg4 ;
-(int)legalProviderCapabilities;
-(void)defineAction:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(void)defineMessage:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(id)getProviderDirectory;
-(void)sendAttributes:(id)arg1 ;
-(void)sendPaymentTransaction:(id)arg1 ;
-(void)initializationComplete;
-(void)defineDynamicVariables:(id)arg1 ;
-(id)getDynamicVariableData:(unsigned long long)arg1 ;
-(void)requestDynamicVariableData:(unsigned long long)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)forceVariableUpdateWithCompletion:(/*^block*/id)arg1 type:(int)arg2 ;
-(void)initializeProvider;
-(void)setInitializeTimeout:(float)arg1 ;
-(void)setVariableTimeout:(float)arg1 ;
-(float)initializeTimeout;
-(void)handleInitializationTimeout;
-(void)setInitializeTimeoutTimer:(NSTimer *)arg1 ;
-(NSObject*<MWSTrackProviderInitializationDelegate>)delegateInitialization;
-(NSTimer *)initializeTimeoutTimer;
-(int)approvedProviderCapabilitiesFlag;
-(void)setApprovedProviderCapabilitiesFlag:(int)arg1 ;
-(int)approvedProviderCapabilities;
-(void)showDebugLogs:(BOOL)arg1 ;
-(float)variableTimeout;
-(int)state;
-(int)type;
-(void)initialize;
-(id)initWithType:(int)arg1 ;
-(void)start;
@end
