/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Release
void Rotatelab_Pool_WoodPlankShatterPool__Release (Rotatelab_Pool_WoodPlankShatterPool_o* __this, UnityEngine_ParticleSystem_o* element, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Release
   void Rotatelab_Pool_WoodPlankShatterPool__Release (Rotatelab_Pool_WoodPlankShatterPool_o* __this,
   UnityEngine_ParticleSystem_o* element, const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__Release_1104d80(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  pcVar5 = (char *)(_UNK_01114f24 + 0x1114d98);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f28 + 0x1114dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f2c + 0x1114db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f30 + 0x1114dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114f34 + 0x1114dd0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01114f38 + 0x1114de4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (*(int *)(param_1 + 0x20),param_2,**(undefined4 **)(_UNK_01114f3c + 0x1114e2c)
                      );
    if (-1 < iVar3) {
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___RemoveAt_267f3f8
                (*(int *)(param_1 + 0x20),iVar3,**(undefined4 **)(_UNK_01114f40 + 0x1114e60));
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + 8);
        uVar7 = *(uint *)(iVar3 + 0xc);
        piVar4 = *(int **)(_UNK_01114f44 + 0x1114ed0);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar7 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar7 + 1;
          piVar4 = (int *)(iVar6 + uVar7 * 4 + 0x10);
          *piVar4 = param_2;
        }
        else {
          uVar7 = *(uint *)(iVar3 + 0xc);
          System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                    (iVar3,uVar7 + 1,
                     *(undefined4 *)
                      (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38)
                                        + 0x10) + 0x60) + 0x3c));
          iVar6 = *(int *)(iVar3 + 8);
          *(uint *)(iVar3 + 0xc) = uVar7 + 1;
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar4 = (int *)(iVar6 + uVar7 * 4 + 0x10);
          *piVar4 = param_2;
        }
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
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

