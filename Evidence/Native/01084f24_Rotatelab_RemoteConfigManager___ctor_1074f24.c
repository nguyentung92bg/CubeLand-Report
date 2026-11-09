/* IL2CPP: Rotatelab.RemoteConfigManager$$.ctor
void Rotatelab_RemoteConfigManager___ctor (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$.ctor
   void Rotatelab_RemoteConfigManager___ctor (Rotatelab_RemoteConfigManager_o* __this, const
   MethodInfo* method); */

int Rotatelab_RemoteConfigManager___ctor_1074f24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_01085184 + 0x1084f38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085188 + 0x1084f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108518c + 0x1084f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085190 + 0x1084f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085194 + 0x1084f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085198 + 0x1084f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108519c + 0x1084f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010851a0 + 0x1084f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010851a4 + 0x1084fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010851a8 + 0x1084fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010851ac + 0x1084fb8));
    *pcVar3 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010851b0 + 0x1084fcc));
  System_Collections_Generic_Dictionary_object__ConfigValue____ctor_204e4c4
            (uVar1,**(undefined4 **)(_UNK_010851b4 + 0x1084fe0));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010851b8 + 0x1085004));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (uVar1,**(undefined4 **)(_UNK_010851bc + 0x1085018));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010851c0 + 0x108503c));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,10,**(undefined4 **)(_UNK_010851c4 + 0x1085054));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010851c8 + 0x1085078));
  System_Collections_Generic_HashSet_int____ctor_2417800
            (iVar2,**(undefined4 **)(_UNK_010851cc + 0x108508c));
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(_UNK_010851d0 + 0x10850b0);
    System_Collections_Generic_HashSet_int___Add_2418c64(iVar2,3,*puVar4);
    System_Collections_Generic_HashSet_int___Add_2418c64(iVar2,5,*puVar4);
    System_Collections_Generic_HashSet_int___Add_2418c64(iVar2,10,*puVar4);
    System_Collections_Generic_HashSet_int___Add_2418c64(iVar2,0xf,*puVar4);
    System_Collections_Generic_HashSet_int___Add_2418c64
              (iVar2,0x13,**(undefined4 **)(_UNK_010851d8 + 0x1085154));
    *(int *)(param_1 + 0x94) = iVar2;
    thunk_FUN_00ec5080((int *)(param_1 + 0x94),iVar2);
    pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
      *pcVar3 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

