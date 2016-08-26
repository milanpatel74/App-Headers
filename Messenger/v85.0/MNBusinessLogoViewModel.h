/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MNBusinessLogoViewModel : FBValueObject <NSCopying> {

	NSURL* _imageURL;
	double _width;
	double _height;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) double width;                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                      //@synthesize height=_height - In the implementation block
-(id)initWithImageURL:(id)arg1 width:(double)arg2 height:(double)arg3 ;
-(double)width;
-(double)height;
-(NSURL *)imageURL;
@end
