/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class GEODirectionsRouteResponse, GEOLatLng, GEOWaypointSearchResultRequest, GEORoute, NSArray, NSMutableDictionary, NSMutableArray, GEORouteAttributes, NSData, MNRoute, NSDictionary;

@interface MNRouteSet : NSObject {

	GEODirectionsRouteResponse* _response;
	GEOLatLng* _requestLocation;
	GEOWaypointSearchResultRequest* _origin;
	GEOWaypointSearchResultRequest* _destination;
	BOOL _isNavigable;
	GEORoute* _currentRoute;
	NSArray* _routes;
	NSMutableDictionary* _alternateStartRoutesLookup;
	NSMutableArray* _contingentStartRoutes;
	NSMutableArray* _contingentMiddleRoutes;
	NSMutableDictionary* _attributedRoutesDict;
	NSMutableDictionary* _routesDict;
	NSMutableDictionary* _constructedRouteDict;
	NSMutableDictionary* _routeConnectionTable;
	NSMutableDictionary* _routeUniquePointRangeDict;
	GEORouteAttributes* _routeAttributes;
	GEORoute* _drivingRouteEquivalentToWalkingRoute;
	NSArray* _trafficIncidentsOnRoutes;
	NSArray* _closureTrafficIncidents;

}

@property (nonatomic,readonly) GEODirectionsRouteResponse * directionsResponse;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * directionsResponseID; 
@property (nonatomic,readonly) GEOWaypointSearchResultRequest * origin;                               //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOWaypointSearchResultRequest * destination;                          //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORoute * currentRoute;                                                 //@synthesize currentRoute=_currentRoute - In the implementation block
@property (nonatomic,readonly) MNRoute * currentAttributedRoute; 
@property (nonatomic,readonly) NSArray * routes;                                                      //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies; 
@property (nonatomic,readonly) NSArray * contingentStartRoutes;                                       //@synthesize contingentStartRoutes=_contingentStartRoutes - In the implementation block
@property (nonatomic,readonly) NSDictionary * alternateStartRoutesLookup; 
@property (nonatomic,readonly) NSArray * trafficIncidentsOnRoutes;                                    //@synthesize trafficIncidentsOnRoutes=_trafficIncidentsOnRoutes - In the implementation block
@property (nonatomic,readonly) NSArray * closureTrafficIncidents;                                     //@synthesize closureTrafficIncidents=_closureTrafficIncidents - In the implementation block
@property (nonatomic,readonly) BOOL isNavigable;                                                      //@synthesize isNavigable=_isNavigable - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes;                                  //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,readonly) GEORoute * drivingRouteEquivalentToWalkingRoute;                       //@synthesize drivingRouteEquivalentToWalkingRoute=_drivingRouteEquivalentToWalkingRoute - In the implementation block
@property (nonatomic,readonly) MNRoute * drivingAttributedRouteEquivalentToWalkingRoute; 
-(id)currentAttributedRoute;
-(id)attributedRouteForRoute:(id)arg1 ;
-(void)setCurrentRoute:(id)arg1 ;
-(id)routesAndContingencies;
-(id)alternateStartRoutesLookup;
-(id)initWithRequest:(id)arg1 response:(id)arg2 requestedOrigin:(id)arg3 requestedDestination:(id)arg4 routeAttributes:(id)arg5 ;
-(void)resetToNewRoute:(id)arg1 ;
-(id)closureTrafficIncidents;
-(id)drivingRouteEquivalentToWalkingRoute;
-(void)_buildAllRouteTypes:(id)arg1 ;
-(BOOL)_routesIncludeWalkingAndDrivingRoutes;
-(void)_conflateWalkingAndDrivingRoutes;
-(void)_resetRoutes;
-(void)_stitchRoutesFromArray:(id)arg1 addToRoutes:(id)arg2 includeDepartureRoutes:(BOOL)arg3 ;
-(void)_printRouteInfo:(id)arg1 ;
-(void)_attachAlternateStartRoute:(id)arg1 toRouteID:(id)arg2 ;
-(SCD_Struct_Si10)_mapPointForRoute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)updateClosureTrafficIncidentsFromETAResponse:(id)arg1 ;
-(id)drivingAttributedRouteEquivalentToWalkingRoute;
-(id)routeWithID:(id)arg1 ;
-(id)contingentStartRoutes;
-(id)trafficIncidentsOnRoutes;
-(id)routeStepsTable;
-(void)addRoutesAndContingenciesToTable:(id)arg1 ;
-(id)directionsResponse;
-(void)dealloc;
-(id)origin;
-(id)destination;
-(id)routeAttributes;
-(id)directionsResponseID;
-(BOOL)isNavigable;
-(id)routes;
-(id)currentRoute;
@end
