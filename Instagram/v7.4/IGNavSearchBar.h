/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextInputTraits.h>

@protocol IGNavSearchBarDelegate;
@class IGTextField, IGButton, UIButton, UIImageView, UIView, UIImage, NSString, NSAttributedString;

@interface IGNavSearchBar : UIView <UITextFieldDelegate, UITextInputTraits> {

	BOOL _editing;
	BOOL _shouldDisplayPeopleIcon;
	BOOL _hasCalculatedFrames;
	id<IGNavSearchBarDelegate> _delegate;
	double _searchBarAnimationDuration;
	IGTextField* _searchTextField;
	IGButton* _cancelButton;
	UIButton* _backgroundButton;
	UIImageView* _editingStateBackgroundView;
	UIView* _searchLabelView;
	UIImage* _searchIcon;
	UIImage* _searchIconOn;
	UIImage* _buttonBackgroundImage;
	UIImage* _buttonBackgroundImageHighlighted;
	UIImage* _backgroundImageSearchActive;
	UIButton* _peopleIconButton;
	CGRect _backgroundButtonFrameInactive;
	CGRect _backgroundButtonFrameActive;
	CGRect _cancelButtonFrameInactive;
	CGRect _cancelButtonFrameActive;
	CGRect _searchTextFieldFrameInactive;
	CGRect _searchTextFieldFrameActive;
	CGRect _searchLabelViewFrameInactive;
	CGRect _searchLabelViewFrameActive;
	CGRect _editingStateBackgroundViewFrameInactive;
	CGRect _editingStateBackgroundViewFrameActive;

}

@property (assign,nonatomic,__weak) id<IGNavSearchBarDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                               //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double searchBarAnimationDuration;                           //@synthesize searchBarAnimationDuration=_searchBarAnimationDuration - In the implementation block
@property (nonatomic,retain) IGTextField * searchTextField;                               //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) IGButton * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * backgroundButton;                                 //@synthesize backgroundButton=_backgroundButton - In the implementation block
@property (nonatomic,retain) UIImageView * editingStateBackgroundView;                    //@synthesize editingStateBackgroundView=_editingStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * searchLabelView;                                    //@synthesize searchLabelView=_searchLabelView - In the implementation block
@property (nonatomic,retain) UIImage * searchIcon;                                        //@synthesize searchIcon=_searchIcon - In the implementation block
@property (nonatomic,retain) UIImage * searchIconOn;                                      //@synthesize searchIconOn=_searchIconOn - In the implementation block
@property (nonatomic,retain) UIImage * buttonBackgroundImage;                             //@synthesize buttonBackgroundImage=_buttonBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * buttonBackgroundImageHighlighted;                  //@synthesize buttonBackgroundImageHighlighted=_buttonBackgroundImageHighlighted - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageSearchActive;                       //@synthesize backgroundImageSearchActive=_backgroundImageSearchActive - In the implementation block
@property (nonatomic,retain) UIButton * peopleIconButton;                                 //@synthesize peopleIconButton=_peopleIconButton - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayPeopleIcon;                                //@synthesize shouldDisplayPeopleIcon=_shouldDisplayPeopleIcon - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameInactive;                        //@synthesize backgroundButtonFrameInactive=_backgroundButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameActive;                          //@synthesize backgroundButtonFrameActive=_backgroundButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameInactive;                            //@synthesize cancelButtonFrameInactive=_cancelButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameActive;                              //@synthesize cancelButtonFrameActive=_cancelButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameInactive;                         //@synthesize searchTextFieldFrameInactive=_searchTextFieldFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameActive;                           //@synthesize searchTextFieldFrameActive=_searchTextFieldFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameInactive;                         //@synthesize searchLabelViewFrameInactive=_searchLabelViewFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameActive;                           //@synthesize searchLabelViewFrameActive=_searchLabelViewFrameActive - In the implementation block
@property (assign,nonatomic) CGRect editingStateBackgroundViewFrameInactive;              //@synthesize editingStateBackgroundViewFrameInactive=_editingStateBackgroundViewFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect editingStateBackgroundViewFrameActive;                //@synthesize editingStateBackgroundViewFrameActive=_editingStateBackgroundViewFrameActive - In the implementation block
@property (assign,nonatomic) BOOL hasCalculatedFrames;                                    //@synthesize hasCalculatedFrames=_hasCalculatedFrames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(void)setSearchBarAnimationDuration:(double)arg1 ;
-(void)setSearchIcon:(UIImage *)arg1 ;
-(void)setSearchIconOn:(UIImage *)arg1 ;
-(UIButton *)backgroundButton;
-(UIView *)searchLabelView;
-(UIImageView *)editingStateBackgroundView;
-(IGTextField *)searchTextField;
-(void)setShouldDisplayPeopleIcon:(BOOL)arg1 ;
-(UIButton *)peopleIconButton;
-(BOOL)shouldDisplayPeopleIcon;
-(UIImage *)backgroundImageSearchActive;
-(UIImage *)searchIconOn;
-(UIImage *)searchIcon;
-(UIImage *)buttonBackgroundImage;
-(UIImage *)buttonBackgroundImageHighlighted;
-(void)searchBarTapped;
-(void)peopleIconButtonTapped;
-(id)generateBackgroundImageWithFillColor:(id)arg1 ;
-(void)setHasCalculatedFrames:(BOOL)arg1 ;
-(BOOL)hasCalculatedFrames;
-(void)setBackgroundButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameInactive:(CGRect)arg1 ;
-(void)setEditingStateBackgroundViewFrameInactive:(CGRect)arg1 ;
-(void)setCancelButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameInactive:(CGRect)arg1 ;
-(void)calculateAnimationFrames;
-(void)setBackgroundButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameActive:(CGRect)arg1 ;
-(void)setEditingStateBackgroundViewFrameActive:(CGRect)arg1 ;
-(void)setCancelButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameActive:(CGRect)arg1 ;
-(CGRect)searchLabelViewFrameActive;
-(CGRect)backgroundButtonFrameActive;
-(CGRect)cancelButtonFrameActive;
-(CGRect)searchTextFieldFrameActive;
-(CGRect)editingStateBackgroundViewFrameActive;
-(CGRect)backgroundButtonFrameInactive;
-(CGRect)cancelButtonFrameInactive;
-(double)searchBarAnimationDuration;
-(void)addSpringAnimations:(/*^block*/id)arg1 duration:(double)arg2 complete:(/*^block*/id)arg3 ;
-(CGRect)searchLabelViewFrameInactive;
-(CGRect)searchTextFieldFrameInactive;
-(CGRect)editingStateBackgroundViewFrameInactive;
-(void)setSearchTextField:(IGTextField *)arg1 ;
-(void)setBackgroundButton:(UIButton *)arg1 ;
-(void)setEditingStateBackgroundView:(UIImageView *)arg1 ;
-(void)setSearchLabelView:(UIView *)arg1 ;
-(void)setButtonBackgroundImage:(UIImage *)arg1 ;
-(void)setButtonBackgroundImageHighlighted:(UIImage *)arg1 ;
-(void)setBackgroundImageSearchActive:(UIImage *)arg1 ;
-(void)setPeopleIconButton:(UIButton *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)makeActive:(BOOL)arg1 ;
-(void)makeInactive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGNavSearchBarDelegate>)arg1 ;
-(void)setNeedsLayout;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGNavSearchBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(long long)keyboardAppearance;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(IGButton *)cancelButton;
-(void)setCancelButton:(IGButton *)arg1 ;
-(BOOL)canResignFirstResponder;
-(NSString *)placeholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)cancelButtonTapped;
@end
