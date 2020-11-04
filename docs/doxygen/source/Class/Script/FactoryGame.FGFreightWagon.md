\page ClassScriptFGFreightWagon FGFreightWagon
### Asset Path :
<b><blockquote>/Script/FactoryGame.FGFreightWagon</blockquote></b>
@ref ClassScriptFGFreightWagonmVehicleMovement

@ref ClassScriptFGFreightWagonmCargoOverlapCollision

@ref ClassScriptFGFreightWagonmMesh

@ref ClassScriptFGFreightWagonmHealthComponent

@ref ClassScriptFGFreightWagonRootComponent

## Properties

### mFreightCargoType
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_e_freight_cargo_type.html"><blockquote>EFreightCargoType</blockquote></a></b>
</details>
@endhtmlonly

### mTransitoryCargoType
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_e_freight_cargo_type.html"><blockquote>EFreightCargoType</blockquote></a></b>
</details>
@endhtmlonly

### mLaunchedCharacters
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_f_g_character_player.html"><blockquote>FGCharacterPlayer</blockquote></a></b>
</details>
<details>
 <summary>ContainerType</summary>
<blockquote>1</blockquote>
</details>
@endhtmlonly

### mVehicleMovement
@htmlonly
<details>
 <summary>bReplicates</summary>
<blockquote>True</blockquote>
</details>
@endhtmlonly

### mStorageInventory
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_f_g_inventory_component.html"><blockquote>FGInventoryComponent</blockquote></a></b>
</details>
@endhtmlonly

### mContainerMeshStandard
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>softobject</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>softobject</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_static_mesh.html"><blockquote>StaticMesh</blockquote></a></b>
</details>
@endhtmlonly

### mContainerMeshLiquid
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>softobject</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>softobject</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_static_mesh.html"><blockquote>StaticMesh</blockquote></a></b>
</details>
@endhtmlonly

### mInventorySize
@htmlonly
<blockquote>24</blockquote>
@endhtmlonly

### mFluidStackSizeDefault
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>byte</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_e_stack_size.html"><blockquote>EStackSize</blockquote></a></b>
</details>
@endhtmlonly

### mFluidStackSizeMultiplier
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>int</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>int</blockquote>
</details>
@endhtmlonly

### mCargoMeshComponent
@htmlonly
<details>
 <summary>PinCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategory</summary>
<blockquote>Object</blockquote>
</details>
<details>
 <summary>PinSubCategoryObject</summary>
<b><a href="_class_script_static_mesh_component.html"><blockquote>StaticMeshComponent</blockquote></a></b>
</details>
@endhtmlonly

### mLaunchCharacterScalar
@htmlonly
<blockquote>3000</blockquote>
@endhtmlonly

### mCargoOverlapCollision
@htmlonly
<details>
 <summary>AttachParent</summary>
<details>
 <summary>$ObjectClass</summary>
<b><a href="_class_script_skeletal_mesh_component.html"><blockquote>SkeletalMeshComponent</blockquote></a></b>
</details>
<details>
 <summary>$ObjectFlags</summary>
<blockquote>262177</blockquote>
</details>
<details>
 <summary>$ObjectName</summary>
<blockquote>VehicleMesh</blockquote>
</details>
<details>
 <summary>bGenerateOverlapEvents</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>BodyInstance</summary>
<details>
 <summary>ObjectType</summary>
<blockquote>6</blockquote>
</details>
<details>
 <summary>CollisionEnabled</summary>
<blockquote>3</blockquote>
</details>
<details>
 <summary>SleepFamily</summary>
<blockquote>ESleepFamily::Normal</blockquote>
</details>
<details>
 <summary>DOFMode</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>bUseCCD</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bNotifyRigidBodyCollision</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bSimulatePhysics</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bOverrideMass</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bEnableGravity</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bAutoWeld</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bStartAwake</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bGenerateWakeEvents</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bUpdateMassWhenScaleChanges</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockTranslation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockRotation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockXTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockXRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxAngularVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxDepenetrationVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideWalkableSlopeOnInstance</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bInterpolateWhenSubStepping</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>CollisionProfileName</summary>
<blockquote>Vehicle</blockquote>
</details>
<details>
 <summary>CollisionResponses</summary>
<details>
 <summary>ResponseArray</summary>
<ol>
<li>
<details>
 <summary>Channel</summary>
<blockquote>BuildGun</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>WeaponInstantHit</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>HologramClearance</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>1</blockquote>
</details>
</li>
</ol>
</details>
</details>
<details>
 <summary>MaxDepenetrationVelocity</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>MassInKgOverride</summary>
<blockquote>100</blockquote>
</details>
<details>
 <summary>LinearDamping</summary>
<blockquote>0.009999999776482582</blockquote>
</details>
<details>
 <summary>AngularDamping</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>CustomDOFPlaneNormal</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>COMNudge</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>MassScale</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>InertiaTensorScale</summary>
<details>
 <summary>X</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>1</blockquote>
</details>
</details>
<details>
 <summary>WalkableSlopeOverride</summary>
<details>
 <summary>WalkableSlopeBehavior</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>WalkableSlopeAngle</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>PhysMaterialOverride</summary>
<details>
 <summary>$Empty</summary>
<blockquote>True</blockquote>
</details>
</details>
<details>
 <summary>MaxAngularVelocity</summary>
<blockquote>3600</blockquote>
</details>
<details>
 <summary>CustomSleepThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>StabilizationThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>PhysicsBlendWeight</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>PositionSolverIterationCount</summary>
<blockquote>8</blockquote>
</details>
<details>
 <summary>VelocitySolverIterationCount</summary>
<blockquote>1</blockquote>
</details>
</details>
</details>
@endhtmlonly

### mLength
@htmlonly
<blockquote>500</blockquote>
@endhtmlonly

### mHologramClass
@htmlonly
<b><a href="_class_script_f_g_railroad_vehicle_hologram.html"><blockquote>FGRailroadVehicleHologram</blockquote></a></b>
@endhtmlonly

### mMesh
@htmlonly
<details>
 <summary>bGenerateOverlapEvents</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>BodyInstance</summary>
<details>
 <summary>ObjectType</summary>
<blockquote>6</blockquote>
</details>
<details>
 <summary>CollisionEnabled</summary>
<blockquote>3</blockquote>
</details>
<details>
 <summary>SleepFamily</summary>
<blockquote>ESleepFamily::Normal</blockquote>
</details>
<details>
 <summary>DOFMode</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>bUseCCD</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bNotifyRigidBodyCollision</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bSimulatePhysics</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bOverrideMass</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bEnableGravity</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bAutoWeld</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bStartAwake</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bGenerateWakeEvents</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bUpdateMassWhenScaleChanges</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockTranslation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockRotation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockXTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockXRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxAngularVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxDepenetrationVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideWalkableSlopeOnInstance</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bInterpolateWhenSubStepping</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>CollisionProfileName</summary>
<blockquote>Vehicle</blockquote>
</details>
<details>
 <summary>CollisionResponses</summary>
<details>
 <summary>ResponseArray</summary>
<ol>
<li>
<details>
 <summary>Channel</summary>
<blockquote>BuildGun</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>WeaponInstantHit</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>HologramClearance</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>1</blockquote>
</details>
</li>
</ol>
</details>
</details>
<details>
 <summary>MaxDepenetrationVelocity</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>MassInKgOverride</summary>
<blockquote>100</blockquote>
</details>
<details>
 <summary>LinearDamping</summary>
<blockquote>0.009999999776482582</blockquote>
</details>
<details>
 <summary>AngularDamping</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>CustomDOFPlaneNormal</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>COMNudge</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>MassScale</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>InertiaTensorScale</summary>
<details>
 <summary>X</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>1</blockquote>
</details>
</details>
<details>
 <summary>WalkableSlopeOverride</summary>
<details>
 <summary>WalkableSlopeBehavior</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>WalkableSlopeAngle</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>PhysMaterialOverride</summary>
<details>
 <summary>$Empty</summary>
<blockquote>True</blockquote>
</details>
</details>
<details>
 <summary>MaxAngularVelocity</summary>
<blockquote>3600</blockquote>
</details>
<details>
 <summary>CustomSleepThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>StabilizationThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>PhysicsBlendWeight</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>PositionSolverIterationCount</summary>
<blockquote>8</blockquote>
</details>
<details>
 <summary>VelocitySolverIterationCount</summary>
<blockquote>1</blockquote>
</details>
</details>
@endhtmlonly

### mHealthComponent
@htmlonly
<details>
 <summary>bNetAddressable</summary>
<blockquote>True</blockquote>
</details>
@endhtmlonly

### mDisabledByWaterLocations
@htmlonly
<ol>
<li>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</li>
</ol>
@endhtmlonly

### mPrimaryColor
@htmlonly
<details>
 <summary>R</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>G</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>B</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>A</summary>
<blockquote>1</blockquote>
</details>
@endhtmlonly

### mSecondaryColor
@htmlonly
<details>
 <summary>R</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>G</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>B</summary>
<blockquote>-1</blockquote>
</details>
<details>
 <summary>A</summary>
<blockquote>1</blockquote>
</details>
@endhtmlonly

### mSubmergedAngularDamping
@htmlonly
<blockquote>6</blockquote>
@endhtmlonly

### mSubmergedLinearDamping
@htmlonly
<blockquote>15</blockquote>
@endhtmlonly

### mSubmergedBouyantForce
@htmlonly
<blockquote>1000</blockquote>
@endhtmlonly

### mAddToSignificanceManager
@htmlonly
<blockquote>True</blockquote>
@endhtmlonly

### mSignificanceRange
@htmlonly
<blockquote>20000</blockquote>
@endhtmlonly

### mSimulationDistance
@htmlonly
<blockquote>20000</blockquote>
@endhtmlonly

### mShouldAttachDriver
@htmlonly
<blockquote>True</blockquote>
@endhtmlonly

### RootComponent
@htmlonly
<details>
 <summary>bGenerateOverlapEvents</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>BodyInstance</summary>
<details>
 <summary>ObjectType</summary>
<blockquote>6</blockquote>
</details>
<details>
 <summary>CollisionEnabled</summary>
<blockquote>3</blockquote>
</details>
<details>
 <summary>SleepFamily</summary>
<blockquote>ESleepFamily::Normal</blockquote>
</details>
<details>
 <summary>DOFMode</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>bUseCCD</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bNotifyRigidBodyCollision</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bSimulatePhysics</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bOverrideMass</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bEnableGravity</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bAutoWeld</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bStartAwake</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bGenerateWakeEvents</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bUpdateMassWhenScaleChanges</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockTranslation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockRotation</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>bLockXTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZTranslation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockXRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockYRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bLockZRotation</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxAngularVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideMaxDepenetrationVelocity</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bOverrideWalkableSlopeOnInstance</summary>
<blockquote>False</blockquote>
</details>
<details>
 <summary>bInterpolateWhenSubStepping</summary>
<blockquote>True</blockquote>
</details>
<details>
 <summary>CollisionProfileName</summary>
<blockquote>Vehicle</blockquote>
</details>
<details>
 <summary>CollisionResponses</summary>
<details>
 <summary>ResponseArray</summary>
<ol>
<li>
<details>
 <summary>Channel</summary>
<blockquote>BuildGun</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>WeaponInstantHit</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>2</blockquote>
</details>
</li>
<li>
<details>
 <summary>Channel</summary>
<blockquote>HologramClearance</blockquote>
</details>
<details>
 <summary>Response</summary>
<blockquote>1</blockquote>
</details>
</li>
</ol>
</details>
</details>
<details>
 <summary>MaxDepenetrationVelocity</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>MassInKgOverride</summary>
<blockquote>100</blockquote>
</details>
<details>
 <summary>LinearDamping</summary>
<blockquote>0.009999999776482582</blockquote>
</details>
<details>
 <summary>AngularDamping</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>CustomDOFPlaneNormal</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>COMNudge</summary>
<details>
 <summary>X</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>MassScale</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>InertiaTensorScale</summary>
<details>
 <summary>X</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Y</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>Z</summary>
<blockquote>1</blockquote>
</details>
</details>
<details>
 <summary>WalkableSlopeOverride</summary>
<details>
 <summary>WalkableSlopeBehavior</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>WalkableSlopeAngle</summary>
<blockquote>0</blockquote>
</details>
</details>
<details>
 <summary>PhysMaterialOverride</summary>
<details>
 <summary>$Empty</summary>
<blockquote>True</blockquote>
</details>
</details>
<details>
 <summary>MaxAngularVelocity</summary>
<blockquote>3600</blockquote>
</details>
<details>
 <summary>CustomSleepThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>StabilizationThresholdMultiplier</summary>
<blockquote>1</blockquote>
</details>
<details>
 <summary>PhysicsBlendWeight</summary>
<blockquote>0</blockquote>
</details>
<details>
 <summary>PositionSolverIterationCount</summary>
<blockquote>8</blockquote>
</details>
<details>
 <summary>VelocitySolverIterationCount</summary>
<blockquote>1</blockquote>
</details>
</details>
@endhtmlonly
