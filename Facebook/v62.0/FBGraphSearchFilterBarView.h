/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol UITextFieldDelegateUISearchBarDelegate;
@class UISearchBar, UIView, NSString;

@interface FBGraphSearchFilterBarView : UIView {

	UISearchBar* _searchView;
	UIView* _separator;
	id<UITextFieldDelegate><UISearchBarDelegate> _delegate;
	NSString* _placeholderText;

}

@property (assign,nonatomic,__weak) id<UITextFieldDelegate><UISearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                                  //@synthesize placeholderText=_placeholderText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 placeholderText:(id)arg2 numericInputField:(BOOL)arg3 inPopover:(BOOL)arg4 ;
-(void)_textUpdated:(id)arg1 ;
-(void)setDelegate:(id<UITextFieldDelegate><UISearchBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<UITextFieldDelegate><UISearchBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end
