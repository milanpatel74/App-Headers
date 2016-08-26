/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBUserSession, FBMemTaggableActivity;

@interface FBComposerTaggableActivityTableViewCell : UITableViewCell {

	id _glyphDownload;
	unsigned long long _style;
	double _textLabelLeftPadding;
	double _thumbnailLeftPadding;
	FBUserSession* _session;
	FBMemTaggableActivity* _taggableActivity;
	double _thumbnailSize;

}

@property (nonatomic,readonly) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemTaggableActivity * taggableActivity;              //@synthesize taggableActivity=_taggableActivity - In the implementation block
@property (assign,nonatomic) double thumbnailSize;                                  //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(void)hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTaggableActivity:(FBMemTaggableActivity *)arg1 ;
-(FBMemTaggableActivity *)taggableActivity;
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_showChevronWithSolidColor:(id)arg1 ;
-(void)_setTextColorsHovered:(BOOL)arg1 ;
-(void)_showGlyph:(id)arg1 solidColor:(id)arg2 ;
-(void)layoutSubviews;
-(double)thumbnailSize;
-(FBUserSession *)session;
-(void)setThumbnailSize:(double)arg1 ;
@end
