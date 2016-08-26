/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBPlacePickerSearchBarProtocol.h>

@protocol FBPlacePickerSearchBarDelegate;
@class NSString, FBTextField, UIImageView;

@interface FBActivitySharingGenericSearchField : UITableViewCell <UITextFieldDelegate, FBPlacePickerSearchBarProtocol> {

	FBTextField* _searchField;
	UIImageView* _searchImage;
	id<FBPlacePickerSearchBarDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic,__weak) id<FBPlacePickerSearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)clearInputText;
-(id)initWithReuseIdentifier:(id)arg1 initialText:(id)arg2 ;
-(void)searchFieldDidChange:(id)arg1 ;
-(void)_toggleCancelButton;
-(void)setDelegate:(id<FBPlacePickerSearchBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBPlacePickerSearchBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)placeholder;
-(void)_cancelButtonTapped:(id)arg1 ;
@end
