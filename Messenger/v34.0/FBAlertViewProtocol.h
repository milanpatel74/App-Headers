/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString;


@protocol FBAlertViewProtocol <NSObject>
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
@required
-(void)show;
-(void)setDelegate:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
-(long long)addButtonWithTitle:(id)arg1;
-(void)setCancelButtonIndex:(long long)arg1;
-(NSString *)title;
-(long long)tag;
-(void)setTag:(long long)arg1;
-(NSString *)message;
-(id)textFieldAtIndex:(long long)arg1;
-(void)setMessage:(id)arg1;
-(BOOL)isVisible;
-(long long)firstOtherButtonIndex;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(void)setAlertViewStyle:(long long)arg1;
-(id)buttonTitleAtIndex:(long long)arg1;

@end
