import { useState, useEffect } from 'react';
import AsyncStorage from '@react-native-async-storage/async-storage';

export function useAuth() {
  const [isLoggedIn, setIsLoggedInState] = useState(false);

  useEffect(() => {
    AsyncStorage.getItem('isLoggedIn').then((value) => {
      if (value === 'true') setIsLoggedInState(true);
    });
  }, []);

  const setIsLoggedIn = async (value: boolean) => {
    setIsLoggedInState(value);
    await AsyncStorage.setItem('isLoggedIn', value ? 'true' : 'false');
  };

  return { isLoggedIn, setIsLoggedIn };
}
