/* IL2CPP: Rotatelab.Pool.WoodPlankShatterReleaser$$OnParticleSystemStopped
void Rotatelab_Pool_WoodPlankShatterReleaser__OnParticleSystemStopped (Rotatelab_Pool_WoodPlankShatterReleaser_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterReleaser$$OnParticleSystemStopped
   void Rotatelab_Pool_WoodPlankShatterReleaser__OnParticleSystemStopped
   (Rotatelab_Pool_WoodPlankShatterReleaser_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterReleaser__OnParticleSystemStopped_1105570(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  pcVar6 = (char *)(_UNK_011155fc + 0x1115584);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115600 + 0x1115598));
    *pcVar6 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01115604 + 0x11155ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01114f24 + 0x1114d98);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f28 + 0x1114dac),iVar8,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f2c + 0x1114db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f30 + 0x1114dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f34 + 0x1114dd0));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01114f38 + 0x1114de4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(iVar8,0,0);
  if (iVar3 == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (*(int *)(iVar4 + 0x20),iVar8,**(undefined4 **)(_UNK_01114f3c + 0x1114e2c));
    if (-1 < iVar3) {
      if (*(int *)(iVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___RemoveAt_267f3f8
                (*(int *)(iVar4 + 0x20),iVar3,**(undefined4 **)(_UNK_01114f40 + 0x1114e60));
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar8,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
      iVar4 = *(int *)(iVar4 + 0x24);
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 8);
        uVar9 = *(uint *)(iVar4 + 0xc);
        piVar5 = *(int **)(_UNK_01114f44 + 0x1114ed0);
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar9 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar4 + 0xc) = uVar9 + 1;
          piVar5 = (int *)(iVar3 + uVar9 * 4 + 0x10);
          *piVar5 = iVar8;
        }
        else {
          uVar9 = *(uint *)(iVar4 + 0xc);
          System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                    (iVar4,uVar9 + 1,
                     *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38)
                                        + 0x10) + 0x60) + 0x3c));
          iVar3 = *(int *)(iVar4 + 8);
          *(uint *)(iVar4 + 0xc) = uVar9 + 1;
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar5 = (int *)(iVar3 + uVar9 * 4 + 0x10);
          *piVar5 = iVar8;
        }
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return;
}

