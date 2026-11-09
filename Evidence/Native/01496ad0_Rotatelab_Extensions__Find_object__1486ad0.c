/* IL2CPP: Rotatelab.Extensions$$Find<object>
Il2CppObject* Rotatelab_Extensions__Find_object_ (System_Object_array* array, System_Predicate_T__o* selector, const MethodInfo_1486AD0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Find<object>
   Il2CppObject* Rotatelab_Extensions__Find_object_ (System_Object_array* array,
   System_Predicate_T__o* selector, const MethodInfo_1486AD0* method); */

undefined4 Rotatelab_Extensions__Find_object__1486ad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar5;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_3);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (param_1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164bda0 + 0x164bd4c));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164bda4 + 0x164bd60);
  }
  else {
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar1 = (**(code **)(param_2 + 0xc))
                            (*(undefined4 *)(param_2 + 0x20),
                             *(undefined4 *)(param_1 + 0x10 + uVar5 * 4),
                             *(undefined4 *)(param_2 + 0x14),*(code **)(param_2 + 0xc),unaff_r4,
                             unaff_r5,unaff_r6);
          if (iVar1 != 0) {
            if (*(uint *)(param_1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            return *(undefined4 *)(param_1 + 0x10 + uVar5 * 4);
          }
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar2);
      }
      return 0;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164bda8 + 0x164bd6c));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164bdac + 0x164bd80);
  }
  uVar4 = thunk_FUN_00f23fd0(uVar4);
  System_ArgumentNullException___ctor_2b08d00(uVar3,uVar4,0);
  func_0x00ec3920(uVar3,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

