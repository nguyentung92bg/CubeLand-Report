/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ClearObject
void Rotatelab_Scripts_ObjectManager__ClearObject (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ClearObject
   void Rotatelab_Scripts_ObjectManager__ClearObject (Rotatelab_Scripts_ObjectManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__ClearObject_102ca58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_0103cfbc + 0x103ca70);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfc0 + 0x103ca84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfc4 + 0x103ca90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfc8 + 0x103ca9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfcc + 0x103caa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfd0 + 0x103cab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfd4 + 0x103cac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfd8 + 0x103cacc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfdc + 0x103cad8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfe0 + 0x103cae4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfe4 + 0x103caf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfe8 + 0x103cafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cfec + 0x103cb08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cff0 + 0x103cb14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cff4 + 0x103cb20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cff8 + 0x103cb2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103cffc + 0x103cb38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d000 + 0x103cb44));
    *pcVar5 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x58),**(undefined4 **)(_UNK_0103d004 + 0x103cb84));
  uStack_38 = uStack_58;
  uStack_34 = puStack_54;
  uStack_30 = uStack_50;
  piStack_2c = piStack_4c;
  uStack_58 = 0;
  puVar6 = *(undefined4 **)(_UNK_0103d008 + 0x103cbac);
  piVar9 = *(int **)(_UNK_0103d00c + 0x103cbb4);
  puVar8 = *(undefined4 **)(_UNK_0103d010 + 0x103cbbc);
  puStack_54 = &uStack_38;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar6), iVar1 != 0) {
    if (piStack_2c != (int *)0x0) {
      uVar3 = (uint)*(byte *)(*piVar9 + 0xb8);
      if ((uVar3 <= *(byte *)(*piStack_2c + 0xb8)) &&
         (*(int *)(*(int *)(*piStack_2c + 100) + uVar3 * 4 + -4) == *piVar9)) {
        if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Pool_ObjectPool_object___Recycle_1857b50
                  (*(int *)(param_1 + 0x18),piStack_2c,*puVar8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_0103d014 + 0x103cc34));
  if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x60),**(undefined4 **)(_UNK_0103d01c + 0x103cc60));
  uStack_48 = uStack_58;
  puStack_44 = puStack_54;
  uStack_40 = uStack_50;
  piStack_3c = piStack_4c;
  uStack_58 = 0;
  puVar6 = *(undefined4 **)(_UNK_0103d020 + 0x103cc88);
  puVar8 = *(undefined4 **)(_UNK_0103d024 + 0x103cc90);
  puStack_54 = &uStack_48;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_48,*puVar6), iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Pool_ObjectPool_object___Recycle_1857b50(*(int *)(param_1 + 0x1c),piStack_3c,*puVar8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_48,**(undefined4 **)(_UNK_0103d028 + 0x103ccd4));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  Rotatelab_Scripts_ObjectManager__StopLevelStartSpin_102d034(param_1);
  piVar7 = *(int **)(_UNK_0103d030 + 0x103ce0c);
  piVar9 = (int *)(param_1 + 0x84);
  iVar1 = *piVar9;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
  if (iVar1 != 0) {
    if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(*piVar9,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__DestroyImmediate_36099bc(uVar2,0);
    *piVar9 = 0;
    thunk_FUN_00ec5080(piVar9,0);
  }
  piVar9 = (int *)(param_1 + 0x50);
  iVar1 = *piVar9;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
  if (iVar1 != 0) {
    if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(*piVar9,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__DestroyImmediate_36099bc(uVar2,0);
    *piVar9 = 0;
    thunk_FUN_00ec5080(piVar9,0);
  }
  return;
}

