/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$<ConsumeBulletsOfQueuedBlastersExternally>g__TryAddBlasterToQueue|84_1
void Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1 (Rotatelab_Scripts_BlasterController_o* blaster, Rotatelab_Scripts_PlaceableManager___c__DisplayClass84_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager$$<ConsumeBulletsOfQueuedBlastersExternally>g__TryAddBlasterToQueue|84_1
   void 
   Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1
   (Rotatelab_Scripts_BlasterController_o* blaster,
   Rotatelab_Scripts_PlaceableManager___c__DisplayClass84_0_o* , const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1_10498b0
               (int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  pcVar5 = (char *)(_UNK_01059998 + 0x10598c8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105999c + 0x10598dc));
    *pcVar5 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0 < *(int *)(param_1 + 0x114)) {
    iVar2 = *param_2;
    iVar3 = *(int *)(param_1 + 0x10c);
    bVar7 = iVar2 != iVar3;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x110);
    }
    if (!bVar7 || iVar2 == iVar3) {
      iVar3 = param_2[1];
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar3 + 8);
      uVar6 = *(uint *)(iVar3 + 0xc);
      piVar4 = *(int **)(_UNK_010599a0 + 0x1059944);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar6 < *(uint *)(iVar2 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar6 + 1;
        piVar4 = (int *)(iVar2 + uVar6 * 4 + 0x10);
        *piVar4 = param_1;
      }
      else {
        uVar6 = *(uint *)(iVar3 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar3,uVar6 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar2 = *(int *)(iVar3 + 8);
        *(uint *)(iVar3 + 0xc) = uVar6 + 1;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar4 = (int *)(iVar2 + uVar6 * 4 + 0x10);
        *piVar4 = param_1;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar1 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar1);
        } while (!bVar7);
        *puVar1 = *puVar1 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

