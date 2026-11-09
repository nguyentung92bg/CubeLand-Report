/* IL2CPP: Rotatelab.Pool.ListPool.<>c<object>$$<.cctor>b__4_0
void Rotatelab_Pool_ListPool___c_object_____cctor_b__4_0 (Rotatelab_Pool_ListPool___c_T__o* __this, System_Collections_Generic_List_T__o* e, const MethodInfo_1764364* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ListPool.<>c<object>$$<.cctor>b__4_0
   void Rotatelab_Pool_ListPool___c_object_____cctor_b__4_0 (Rotatelab_Pool_ListPool___c_T__o*
   __this, System_Collections_Generic_List_T__o* e, const MethodInfo_1764364* method); */

void Rotatelab_Pool_ListPool___c_object_____cctor_b__4_0_1764364(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  if (iVar6 < 1) {
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6df8 + 0x2ba6d44),0,iVar6,0);
    uVar4 = thunk_FUN_00f00cdc();
    uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6dfc + 0x2ba6d58));
    System_ArgumentNullException___ctor_2b08d00(uVar4,uVar5,0);
  }
  else {
    if (iVar6 < 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e00 + 0x2ba6d78),0,iVar6,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar5 = *(undefined4 *)(_UNK_02ba6e04 + 0x2ba6d8c);
    }
    else {
      iVar2 = FUN_00ed20b8(puVar1,0);
      if (iVar2 < 1) {
        iVar3 = System_Array__get_Length_2b8bcdc(puVar1);
        if (-iVar2 <= iVar3 - iVar6) {
          iVar3 = FUN_00f943a0(*puVar1);
          FUN_00f88e5c((int)puVar1 + iVar3 * -iVar2 + 0x10,iVar3 * iVar6);
          return;
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e14 + 0x2ba6db8));
        uVar4 = thunk_FUN_00f00cdc();
        uVar5 = *(undefined4 *)(_UNK_02ba6e18 + 0x2ba6dcc);
      }
      else {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e0c + 0x2ba6d98));
        uVar4 = thunk_FUN_00f00cdc();
        uVar5 = *(undefined4 *)(_UNK_02ba6e10 + 0x2ba6dac);
      }
    }
    uVar5 = thunk_FUN_00f23fd0(uVar5);
    System_IndexOutOfRangeException___ctor_2b69538(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e08 + 0x2ba6de8));
  func_0x00ec3920(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

