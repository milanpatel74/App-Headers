/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/FBGraphObjectSelectionQueryDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBGraphObjectSelectionChangedDelegate;
@class NSObject, NSArray, FBGraphObjectTableDataSource, NSString;

@interface FBGraphObjectTableSelection : NSObject <FBGraphObjectSelectionQueryDelegate, UITableViewDelegate> {

	BOOL _allowsMultipleSelection;
	NSObject*<FBGraphObjectSelectionChangedDelegate> _delegate;
	NSArray* _selection;
	FBGraphObjectTableDataSource* _dataSource;

}

@property (assign,nonatomic) NSObject*<FBGraphObjectSelectionChangedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * selection;                                                    //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                           //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)graphObjectTableDataSource:(id)arg1 selectionIncludesItem:(id)arg2 ;
-(void)deselectItems:(id)arg1 tableView:(id)arg2 ;
-(void)selectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(BOOL)arg3 ;
-(void)deselectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(BOOL)arg3 ;
-(BOOL)selectionIncludesItem:(id)arg1 ;
-(void)selectItem:(id)arg1 tableView:(id)arg2 ;
-(void)clearSelectionInTableView:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)setDelegate:(NSObject*<FBGraphObjectSelectionChangedDelegate>)arg1 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(BOOL)allowsMultipleSelection;
-(FBGraphObjectTableDataSource *)dataSource;
-(NSObject*<FBGraphObjectSelectionChangedDelegate>)delegate;
-(NSArray *)selection;
-(void)setSelection:(NSArray *)arg1 ;
-(void)selectionChanged;
-(id)initWithDataSource:(id)arg1 ;
@end
