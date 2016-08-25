/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, EDAMSavedSearch;

@interface EDAMcreateSearch_args : NSObject <NSCoding> {

	NSString* __authenticationToken;
	EDAMSavedSearch* __search;
	BOOL __authenticationToken_isset;
	BOOL __search_isset;

}

@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
@property (setter=setSearch:,getter=search,nonatomic,retain) EDAMSavedSearch * search; 
-(void)read:(id)arg1 ;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(id)initWithAuthenticationToken:(id)arg1 search:(id)arg2 ;
-(BOOL)searchIsSet;
-(void)unsetSearch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setSearch:(EDAMSavedSearch *)arg1 ;
-(EDAMSavedSearch *)search;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end
