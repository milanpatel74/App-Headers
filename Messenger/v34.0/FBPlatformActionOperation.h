/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBPlatformActionOperationDelegate;
@class FBPlatformActionProcessor, FBPlatformAction, NSString;

@interface FBPlatformActionOperation : NSObject {

	FBPlatformActionProcessor* _processor;
	BOOL _treatDataFailuresAsFatal;
	FBPlatformAction* _action;
	id<FBPlatformActionOperationDelegate> _delegate;
	/*^block*/id _completeOperationBlock;

}

@property (nonatomic,readonly) FBPlatformAction * action;                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlatformActionOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBPlatformActionProcessor * processor; 
@property (assign,nonatomic) BOOL treatDataFailuresAsFatal;                                      //@synthesize treatDataFailuresAsFatal=_treatDataFailuresAsFatal - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultErrorMessage; 
@property (copy) id completeOperationBlock;                                                      //@synthesize completeOperationBlock=_completeOperationBlock - In the implementation block
-(FBPlatformActionProcessor *)processor;
-(BOOL)handleDataError:(id)arg1 ;
-(BOOL)handleDataErrorResponse:(id)arg1 ;
-(NSString *)defaultErrorMessage;
-(void)setCompleteOperationBlock:(id)arg1 ;
-(void)_completeTransactionOperation;
-(void)_failWithErrorCode:(long long)arg1 errorMessage:(id)arg2 errorResponse:(id)arg3 ;
-(void)_failWithServerError:(id)arg1 errorResponse:(id)arg2 ;
-(BOOL)treatDataFailuresAsFatal;
-(void)failWithServerError:(id)arg1 ;
-(id)completeOperationBlock;
-(void)failWithInvalidParameterErrorResponse:(id)arg1 ;
-(void)setTreatDataFailuresAsFatal:(BOOL)arg1 ;
-(void)setProcessor:(FBPlatformActionProcessor *)arg1 ;
-(void)addToTransaction:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBPlatformActionOperationDelegate>)arg1 ;
-(id<FBPlatformActionOperationDelegate>)delegate;
-(FBPlatformAction *)action;
-(void)cleanup;
-(void)complete;
-(void)process;
-(id)initWithAction:(id)arg1 ;
@end
