/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBGroupSideFeedDescriptionCellDelegate;
@class FBRichTextView, NSString;

@interface FBGroupSideFeedDescriptionCell : UITableViewCell {

	FBRichTextView* _textView;
	BOOL _isExpanded;
	NSString* _groupDescription;
	id<FBGroupSideFeedDescriptionCellDelegate> _delegate;

}

@property (nonatomic,copy) NSString * groupDescription;                                               //@synthesize groupDescription=_groupDescription - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                         //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic,__weak) id<FBGroupSideFeedDescriptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightConstrainedToSize:(CGSize)arg1 groupDescription:(id)arg2 isExpanded:(BOOL)arg3 ;
-(NSString *)groupDescription;
-(void)textViewTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)setGroupDescription:(NSString *)arg1 ;
-(void)setDelegate:(id<FBGroupSideFeedDescriptionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBGroupSideFeedDescriptionCellDelegate>)delegate;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
@end
