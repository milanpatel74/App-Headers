/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBImageProcessingRequestProtocol <NSObject>
@property (assign,nonatomic) unsigned long long status; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) BOOL canCancelRequestIfNeeded; 
@property (assign,nonatomic) BOOL canExecuteInBackground; 
@required
-(double)requestTime;
-(void)setRequestTime:(double)arg1;
-(void)addRequester:(id)arg1;
-(void)executeWithContext:(id)arg1;
-(BOOL)canCancelRequestIfNeeded;
-(void)setCanCancelRequestIfNeeded:(BOOL)arg1;
-(BOOL)canExecuteInBackground;
-(void)setCanExecuteInBackground:(BOOL)arg1;
-(void)cancel;
-(void)clear;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1;
-(void)finish;
-(void)reportProgress;

@end
