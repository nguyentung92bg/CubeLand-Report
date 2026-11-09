/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryGetBlasterFromPlaceable
bool Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable (Rotatelab_Scripts_BasePlaceableController_o* placeable, Rotatelab_Scripts_BlasterController_o** blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryGetBlasterFromPlaceable
   bool Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable
   (Rotatelab_Scripts_BasePlaceableController_o* placeable, Rotatelab_Scripts_BlasterController_o**
   blaster, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
               (int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01056e30 + 0x1056d2c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056e34 + 0x1056d40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056e38 + 0x1056d4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056e3c + 0x1056d58));
    *pcVar3 = '\x01';
  }
  *param_2 = 0;
  thunk_FUN_00ec5080(param_2,0);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01056e40 + 0x1056d88) + 0xb8);
    if ((*(byte *)(iVar1 + 0xb8) < uVar2) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01056e40 + 0x1056d88)))
    {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01056e44 + 0x1056dbc) + 0xb8);
      if ((*(byte *)(iVar1 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01056e44 + 0x1056dbc))
         ) goto LAB_01056dfc;
      param_1 = (int *)param_1[0x18];
      *param_2 = (int)param_1;
    }
    else {
      *param_2 = (int)param_1;
    }
    thunk_FUN_00ec5080(param_2,param_1);
  }
LAB_01056dfc:
  iVar1 = *param_2;
  if (*(int *)(**(int **)(_UNK_01056e48 + 0x1056e08) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar3 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_3607f30(iVar1,0);
  return uVar2 ^ 1;
}

