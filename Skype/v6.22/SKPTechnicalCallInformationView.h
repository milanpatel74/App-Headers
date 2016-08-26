/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class SKPCallStateMachine, UITapGestureRecognizer, NSString;

@interface SKPTechnicalCallInformationView : UITextView <UITextViewDelegate> {

	BOOL _shouldShow;
	BOOL _userIsScrolling;
	SKPCallStateMachine* _callStateMachine;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) BOOL shouldShow;                                            //@synthesize shouldShow=_shouldShow - In the implementation block
@property (assign,nonatomic) BOOL userIsScrolling;                                       //@synthesize userIsScrolling=_userIsScrolling - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) SKPCallStateMachine * callStateMachine;                     //@synthesize callStateMachine=_callStateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallStateMachine:(SKPCallStateMachine *)arg1 ;
-(SKPCallStateMachine *)callStateMachine;
-(void)showView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUserIsScrolling:(BOOL)arg1 ;
-(BOOL)userIsScrolling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setShouldShow:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldShow;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end
