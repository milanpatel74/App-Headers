/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibDialogView.h>
#import <UIKit/UITextViewDelegate.h>

@class S8Button, UILabel, S8TextView, UIView, NSString;

@interface ChangeNameDialogView : XibDialogView <UITextViewDelegate> {

	BOOL _isTutorial;
	int _currentPriceForChangeName;
	S8Button* _closeButton;
	UILabel* _needToUseGemLabel;
	S8TextView* _nameTextView;
	UIView* _tutorialView;
	UIView* _characterView;

}

@property (nonatomic,retain) S8Button * closeButton;                     //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UILabel * needToUseGemLabel;                //@synthesize needToUseGemLabel=_needToUseGemLabel - In the implementation block
@property (nonatomic,retain) S8TextView * nameTextView;                  //@synthesize nameTextView=_nameTextView - In the implementation block
@property (nonatomic,retain) UIView * tutorialView;                      //@synthesize tutorialView=_tutorialView - In the implementation block
@property (nonatomic,retain) UIView * characterView;                     //@synthesize characterView=_characterView - In the implementation block
@property (assign,nonatomic) int currentPriceForChangeName;              //@synthesize currentPriceForChangeName=_currentPriceForChangeName - In the implementation block
@property (assign,nonatomic) BOOL isTutorial;                            //@synthesize isTutorial=_isTutorial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissed:(id)arg1 ;
-(S8TextView *)nameTextView;
-(void)changeNameWithGemIfNecessary;
-(void)setIsTutorial:(BOOL)arg1 ;
-(UIView *)characterView;
-(void)changeName;
-(UIView *)tutorialView;
-(void)setCurrentPriceForChangeName:(int)arg1 ;
-(int)currentPriceForChangeName;
-(UILabel *)needToUseGemLabel;
-(void)didAcceptChangedName:(id)arg1 ;
-(BOOL)isTutorial;
-(id)initForTutorial;
-(void)saveNamePressed:(id)arg1 ;
-(void)setNeedToUseGemLabel:(UILabel *)arg1 ;
-(void)setNameTextView:(S8TextView *)arg1 ;
-(void)setTutorialView:(UIView *)arg1 ;
-(void)setCharacterView:(UIView *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)showKeyboard;
-(void)hideKeyboard;
-(void)viewWillAppear;
-(S8Button *)closeButton;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setCloseButton:(S8Button *)arg1 ;
-(void)setupViews;
@end
