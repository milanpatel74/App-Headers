/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryFrameSetter <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL hasCompletedComputation; 
@required
-(id)layoutAttributesForElementWithID:(id)arg1;
-(id)elementLayoutForElementID:(id)arg1;
-(id)currentElementsWithinFrame:(CGRect)arg1;
-(id)existingLayoutAttributesForElementWithID:(id)arg1;
-(BOOL)hasCompletedComputation;
-(CGRect)bounds;
-(id)elementAtPoint:(CGPoint)arg1;

@end
