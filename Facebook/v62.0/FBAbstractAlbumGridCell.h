/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, NSString, UIImageView, FBAlbumsGridViewTraits;

@interface FBAbstractAlbumGridCell : UICollectionViewCell {

	UILabel* _descriptionLabel;
	BOOL _isDeletable;
	BOOL _editing;
	NSString* _title;
	UIImageView* _placeHolderImageView;
	FBAlbumsGridViewTraits* _traits;

}

@property (assign,nonatomic) BOOL editing;                                      //@synthesize editing=_editing - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImageView * placeHolderImageView;              //@synthesize placeHolderImageView=_placeHolderImageView - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                                  //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,retain) FBAlbumsGridViewTraits * traits;                   //@synthesize traits=_traits - In the implementation block
-(UIImageView *)placeHolderImageView;
-(id)initWithFrame:(CGRect)arg1 placeholderImageView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)accessibilityLabel;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg1 ;
-(FBAlbumsGridViewTraits *)traits;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setTraits:(FBAlbumsGridViewTraits *)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(BOOL)isDeletable;
@end
