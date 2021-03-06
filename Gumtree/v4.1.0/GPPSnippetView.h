/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GPPAdaptiveHeightView.h>

@class GPPLinkAttachment, GPPLabel, GPPImageView, NSArray, UIScrollView;

@interface GPPSnippetView : GPPAdaptiveHeightView {

	GPPLinkAttachment* _linkAttachment;
	GPPLabel* _titleLabel;
	GPPImageView* _thumbnailView;
	NSArray* _mediaAttachments;
	UIScrollView* _mediaScrollView;
	double _mediaViewMargin;
	double _linkHeight;
	NSArray* _mediaAttachmentViews;

}

@property (nonatomic,retain) GPPLinkAttachment * linkAttachment;              //@synthesize linkAttachment=_linkAttachment - In the implementation block
@property (nonatomic,readonly) GPPLabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) GPPImageView * thumbnailView;                  //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) NSArray * mediaAttachments;                      //@synthesize mediaAttachments=_mediaAttachments - In the implementation block
@property (nonatomic,readonly) UIScrollView * mediaScrollView;                //@synthesize mediaScrollView=_mediaScrollView - In the implementation block
@property (assign,nonatomic) double mediaViewMargin;                          //@synthesize mediaViewMargin=_mediaViewMargin - In the implementation block
@property (assign,nonatomic) double linkHeight;                               //@synthesize linkHeight=_linkHeight - In the implementation block
@property (nonatomic,retain) NSArray * mediaAttachmentViews;                  //@synthesize mediaAttachmentViews=_mediaAttachmentViews - In the implementation block
-(void)gppInit;
-(GPPLinkAttachment *)linkAttachment;
-(void)setLinkAttachment:(GPPLinkAttachment *)arg1 ;
-(void)setMediaAttachments:(NSArray *)arg1 ;
-(double)linkHeight;
-(void)removeMediaViews;
-(void)addLinkViews;
-(void)removeLinkViews;
-(void)addMediaViews;
-(UIScrollView *)mediaScrollView;
-(NSArray *)mediaAttachmentViews;
-(void)setMediaAttachmentViews:(NSArray *)arg1 ;
-(void)layoutSubviewsForLinkAttachment;
-(void)layoutSubviewsForMediaAttachments;
-(double)mediaViewMargin;
-(void)setMediaViewMargin:(double)arg1 ;
-(void)setLinkHeight:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(GPPLabel *)titleLabel;
-(GPPImageView *)thumbnailView;
-(NSArray *)mediaAttachments;
@end

