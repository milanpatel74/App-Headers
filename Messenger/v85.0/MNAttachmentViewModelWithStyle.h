/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSObject;

@interface MNAttachmentViewModelWithStyle : FBValueObject <NSCopying> {

	NSString* _style;
	NSObject*<NSCopying> _viewModel;

}

@property (nonatomic,copy,readonly) NSString * style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithStyle:(id)arg1 viewModel:(id)arg2 ;
-(NSString *)style;
-(NSObject*<NSCopying>)viewModel;
@end
