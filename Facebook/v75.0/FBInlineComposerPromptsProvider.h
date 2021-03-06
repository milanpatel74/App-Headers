/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol FBInlineComposerPromptsProvider <FBInlineComposerLifecycleListener>
@property (nonatomic,copy,readonly) NSArray * currentPrompts; 
@required
-(void)didClosePrompt:(id)arg1 closeReason:(long long)arg2;
-(void)reloadPromptsWithCompletion:(/*^block*/id)arg1;
-(void)didHidePrompt:(id)arg1 hideReason:(long long)arg2;
-(NSArray *)currentPrompts;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;

@end

