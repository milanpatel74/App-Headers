/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1DirectMessageConversationActivityIndicatorLayoutDelegate;
#import <Twitter/Twitter-Structs.h>
@interface T1DirectMessageConversationActivityIndicatorLayout : NSObject {

	id<T1DirectMessageConversationActivityIndicatorLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<T1DirectMessageConversationActivityIndicatorLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets collectionViewInsets; 
+(id)_loadTopActivityIndicatorIndexPath;
-(CGSize)_sizeForLoadTopActivityIndicator;
-(BOOL)_isActivityIndicatorKind:(id)arg1 ;
-(BOOL)_isLoadTopIndexPath:(id)arg1 ;
-(void)configureCollectionViewLayout:(id)arg1 ;
-(void)setDelegate:(id<T1DirectMessageConversationActivityIndicatorLayoutDelegate>)arg1 ;
-(id<T1DirectMessageConversationActivityIndicatorLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionViewInsets;
@end
