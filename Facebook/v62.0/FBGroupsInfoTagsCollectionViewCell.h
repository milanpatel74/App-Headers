/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBGroupsTagView, NSString;

@interface FBGroupsInfoTagsCollectionViewCell : UICollectionViewCell {

	FBGroupsTagView* _tagView;
	BOOL _isTagHighlighted;
	NSString* _tagText;

}

@property (assign,nonatomic) BOOL isTagHighlighted;              //@synthesize isTagHighlighted=_isTagHighlighted - In the implementation block
@property (nonatomic,copy) NSString * tagText;                   //@synthesize tagText=_tagText - In the implementation block
+(CGRect)getFrameForCellWithText:(id)arg1 ;
-(BOOL)isTagHighlighted;
-(NSString *)tagText;
-(void)setIsTagHighlighted:(BOOL)arg1 ;
-(void)setTagText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end
