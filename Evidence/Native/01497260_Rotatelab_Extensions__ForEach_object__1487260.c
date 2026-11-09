/* IL2CPP: Rotatelab.Extensions$$ForEach<object>
void Rotatelab_Extensions__ForEach_object_ (System_Object_array* array, System_Action_T__o* action, const MethodInfo_1487260* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ForEach<object>
   void Rotatelab_Extensions__ForEach_object_ (System_Object_array* array, System_Action_T__o*
   action, const MethodInfo_1487260* method); */

void Rotatelab_Extensions__ForEach_object__1487260(int param_1,int param_2,int param_3)

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
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d018 + 0x164cfc4));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164d01c + 0x164cfd8);
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
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10 + uVar5 * 4),
                     *(undefined4 *)(param_2 + 0x14),*(code **)(param_2 + 0xc),unaff_r4,unaff_r5,
                     unaff_r6);
          uVar2 = *(uint *)(param_1 + 0xc);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar2);
      }
      return;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d020 + 0x164cfe4));
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = *(undefined4 *)(_UNK_0164d024 + 0x164cff8);
  }
  uVar4 = thunk_FUN_00f23fd0(uVar4);
  System_ArgumentNullException___ctor_2b08d00(uVar3,uVar4,0);
  func_0x00ec3920(uVar3,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

